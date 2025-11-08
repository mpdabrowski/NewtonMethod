#pragma once
#include <functional>

class NewtonMethod
{
    public:
	   double calc(std::function<double(double)> func, std::function<double(double)> derivative, double x, int numOfIterations, double epsilon);
};

