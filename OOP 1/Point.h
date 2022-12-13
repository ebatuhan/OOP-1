#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	double x_;
	double y_;

public:
	//Constructors
	Point();
	Point(double x, double y);
	Point(const Point& other_);

	//Set and Get
	void setX(const double x);
	void setY(const double y);

	double getX() const;
	double getY() const;


	//Destructor
	~Point();



	//Methods
	bool isEqual(const Point other_) const;
	double getDistance(const Point other_) const;
	void move(double k);


	//Operator Overloading
	friend istream& operator>>(istream& is, Point& other_);
	friend ostream& operator<<(ostream& os, Point& other_);
};

