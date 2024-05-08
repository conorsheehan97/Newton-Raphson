#include "Newton.h"
#include <iostream>

double testfunc(double x, bool deriv)
{
	if (!deriv)
	{
		return sin(x) - 0.5;
	}
	else
	{
		return cos(x);
	}
}

using namespace std; 

int main()
{
	Newton n;
	double res = n.Newton_Raphson(testfunc);
	cout << "Root found for sin(x) - 0.5 : " << res << endl;
	system("PAUSE");
	return 0;
}