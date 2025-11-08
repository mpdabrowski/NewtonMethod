#include <iostream>
#include <cmath>
#include "NewtonMethod.h"


int main()
{
    auto func = [](double x) {
	   return pow(x, 7) - 1000;
    };

    auto derivative = [](double x) {
	   return 7 * pow(x, 6);
    };

    NewtonMethod newtonMethod = NewtonMethod();
    std::cout << "Result = " << newtonMethod.calc(func, derivative, 3, 10, 1e-7) << "\n";
}
