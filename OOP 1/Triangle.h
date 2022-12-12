#pragma once
#include "Point.h"

class Triangle 
{
private:
	Point a_, b_, c_;

public:
	Triangle();
	Point getA();
	
	Triangle(const Point& a_,const Point& b_,const Point& c_);
	Triangle(const Triangle& other);
	~Triangle() = default;
	void setA(const Point& a_);
	void setB(const Point& b_);
	void setC(const Point& c_);
	
	Point getB();
	Point getC();
	double getAB();
	double getAC();
	double getCB();
	bool isTriangle();
	double getPerimeter();
	bool isEqual(const Triangle& other);
	void move(double K);
	
};
