#pragma once
#include "Point.h"

class Triangle 
{
private:
	Point a_, b_, c_;

public:
	Triangle();
	Triangle(double a_, double b_, double c_);
	Triangle(const Triangle& other);
};
