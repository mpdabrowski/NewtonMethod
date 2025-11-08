#include "NewtonMethod.h"

double NewtonMethod::calc(
    std::function<double(double)> func,
    std::function<double(double)> derivative,
    double x, 
    int numOfIterations, 
    double epsilon
)
{
    for (int i = 0; i < numOfIterations; ++i) {
	   double xn = x - func(x) / derivative(x);

	   if (abs(xn - x) <= epsilon) {
		  return xn;
	   }

	   x = xn;
    }

    return x;
}
