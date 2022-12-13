
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

//Constructors
Point::Point() {
	x_ = 0;
	y_ = 0;
}
Point::Point(double x,double y)
{
	this->x_ = x;
	this->y_ = y;
}
Point::Point(const Point& other_)
{
		this->x_ = other_.x_;
		this->y_ = other_.y_;
}
//Get and Set
void Point::setX(double x)
{
this->x_ = x;
}
void Point::setY(double y) 
{
this->y_ = y;
}
double Point::getX() const
{
	return this->x_;
}
double Point::getY() const
{
	return this->y_;
}
//Destructor
Point::~Point()
{

}

//Methods
bool Point::isEqual(const Point other_) const
{
	return this->x_ == other_.x_;
	return this->y_ == other_.y_;
}
double Point::getDistance(const Point other_) const
{
	return sqrt(pow((this->x_ - other_.x_), 2) + pow((this->y_ - other_.y_), 2));
}
void Point::move(double k)
{
	this->x_ += k;
	this->y_ += k;
}


//Operator Overloading
ostream& operator<<(ostream& os, Point& other_)
{
	os << "(" << other_.getX() << "," << other_.getY() << ")";
	return os;
}
istream& operator>>(istream& is, Point& other_)
{
	double x = 0;
	double y = 0;

	cout << "X: ";
	is >> x;
	cout << "Y: ";
	is >> y;
	
	other_.setX(x);
	other_.setY(y);

	return is;
}