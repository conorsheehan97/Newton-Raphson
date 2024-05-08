#pragma once
class Newton
{
private:
	double init_guess;
	int max_iterations;
	double tolerance;
	double small; 
public:
	Newton(double init_guess = 1);
	bool set_max_iterations(int max_iterations);
	bool set_max_tolerance(double tolerance);
	bool set_small(double small);
	void set_init_guess(double init_guess);
	double Newton_Raphson(double (*func)(double x, bool deriv));
};

