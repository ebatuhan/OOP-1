#include "Triangle.h"
#include <iostream>
#include <cmath>


Triangle::Triangle()
{
	a_;
	b_;
	c_;
}
Point Triangle::getA()
{
	return a_;
}

Triangle::Triangle(const Point& a_,  const Point& b_,const Point& c_)
{
	this->a_ = a_;
	this->b_ = b_;
	this->c_ = c_;
}



Triangle::Triangle(const Triangle& other)
{
	a_ = other.a_;
	b_ = other.b_;
	c_ = other.c_;
}

void Triangle::setA(const Point& _point)
{
	a_ = _point;
}
void Triangle::setB(const Point& _point)
{
	b_ = _point;
}
void Triangle::setC(const Point& _point)
{
	c_ = _point;
}

Point Triangle::getB()
{
	return b_;
}
Point Triangle::getC()
{
	return c_;
}
double Triangle::getAB()
{
	return a_.getDistance(b_);
}
double Triangle::getAC()
{
	return a_.getDistance(c_);
}
double Triangle::getCB()
{
	return c_.getDistance(b_);
}
bool Triangle::isTriangle()
{
	//if (((abs(getAB()) - abs(getAC()) < getCB()) && ((getCB() < getAB() + getAC())) && (abs(getAC()) - abs(getCB()) < getAB() < getAC() + getCB()) && (abs(getAB()) - abs(getCB()) < getAC() < getAB() + getCB()))
	if ((abs(getAB()) - abs(getAC()) < getCB()) && (getCB() < getAB() + getAC()))
	{
		if ((abs(getCB()) - abs(getAB()) < getAC()) && (getAC() < getCB() + getAB()))
		{
			if ((abs(getCB()) - abs(getAC()) < getAB()) && (getAB() < getCB() + getAC()))
		{
				return true;
		}
		}
		
	}
	else
		return false;
}







bool Triangle::isEqual(const Triangle& other) {
	if ((a_.isEqual(other.a_)) && (b_.isEqual(other.b_)) && (c_.isEqual(other.c_)))
	{
		return true;
	}

	else 
		return false;
}

	
	
		




