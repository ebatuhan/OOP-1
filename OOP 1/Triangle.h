#pragma once
#include "Point.h"
#include <iostream>
#include <iosfwd>

class Triangle 
{
private:
	Point* a_;
	Point* b_;
	Point* c_;
public:
	//Constructors
	Triangle();
	Triangle(const Point& a, const Point& b, const Point& c);
	Triangle(const Triangle& other_);

	//Set and Get
	void setA(const Point& a);
	void setB(const Point& b);
	void setC(const Point& c);

	Point getA() const;
	Point getB() const;
	Point getC() const;


	//Methods

	bool isTriangle() const;
	void move(double k) const;
	double getPerimeter() const;
	bool isEqual(const Triangle& other_) const;
	double getArea() const;


	//Operator Overloading
	friend istream& operator>>(istream& is, const Triangle& other_);
	friend ostream& operator<<(ostream& os, const Triangle& other_);

	//Destructor

	~Triangle();
};
