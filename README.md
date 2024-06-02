# Newton-Raphson
This repository implements the Newton-Raphson method for root finding using object-oriented programming (OOP). The project verifies the existence of the chosen root by plotting the analyzed function using Python's Matplotlib library.

## Contents
#### C++ Files:
 - NewtonRaphson.h: Class declaration.
 - NewtonRaphson.cpp: Method implementation file.
 - Test_File.cpp: Test file to demonstrate the functionality.
#### Python Jupyter Notebook: 
 - Used for plotting and verifying results.
#### PDF Document: 
- -NewtonRaphson_Method.pdf provides a mathematical and algorithmic description of the method.

## Project Overview
### Newton-Raphson Method
The Newton-Raphson method is an iterative root-finding algorithm that uses the function and its derivative to rapidly converge to a root. It is widely used due to its quadratic convergence rate under suitable conditions.

## Implementation Details
### NewtonRaphson Class:
#### Attributes:
 - Initial guess.
 - Tolerance.
 - Maximum number of iterations.
#### Methods:
 - setInitialGuess: Sets the initial guess for the root.
 - setTolerance: Sets the tolerance for convergence.
 - newtonRaphsonImplementation: Implements the Newton-Raphson method.
 - setMaxIterations: Sets the maximum number of iterations.
 - derivativeCheck: Ensures the current derivative value is not near-zero to prevent divergence.

## Application:
The class is used to find the root of sin(x) - 0.5.
The found root is checked against the plot of the function generated using Python's Matplotlib library.

## Dependencies
 - C++ Compiler: Any standard C++ compiler (e.g., g++).
 - Python:
 - - Matplotlib for plotting graphs.
 - - Jupyter Notebook for interactive analysis.

## Conclusion
This project provides an object-oriented implementation of the Newton-Raphson method for root finding. The results are validated against the plot of the function sin(x) - 0.5 generated using Python's Matplotlib library, offering a comprehensive understanding of the method's accuracy and application.
