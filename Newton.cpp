#include "Newton.h"
#include <iostream>
#include <iomanip>

using namespace std;

Newton::Newton(double init_guess) : max_iterations{ 1000 }, tolerance{ 1E-7 }, small{ 1E-7 }
{
	set_init_guess(init_guess);
}

bool Newton::set_max_iterations(int max_iterations)
{
	if (max_iterations > 10)
	{
		this->max_iterations = max_iterations;
		return true;
	}
	return false;
}

bool Newton::set_max_tolerance(double tolerance)
{
	if (tolerance > 0 && tolerance < 1)
	{
		this->tolerance = tolerance;
		return true;
	}
	return false;
}

bool Newton::set_small(double small)
{
	if (small > 0 && small < 1)
	{
		this->small = small;
		return true;
	}
	return false;
}

void Newton::set_init_guess(double init_guess)
{
	this->init_guess = init_guess; 
}

double Newton::Newton_Raphson(double (*func)(double x, bool deriv))
{
	double count = 0;
	double dx, fx, dfx, x = init_guess;
	while (true)
	{
		fx = func(x, false);
		dfx = func(x, true);
		if (count == max_iterations)
		{
			cout << "Newton failed to converge" << endl;
			return 0;
		}
		else if (fabs(dfx) < small)
		{
			cout << "Error in Newton - derivitive near 0 " << endl;
			return 0;
		}
		else
		{
			x += (dx = -(fx / dfx));
			if (fabs(dx) < tolerance)
			{
				break;
			}
		}
		count++;
	}
	return x;
}