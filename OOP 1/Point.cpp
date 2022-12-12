#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x_ = 0;
	y_ = 0;
}
Point::Point(double x_, double y_)
{
	this->x_ = x_;
	this->y_ = y_;
}
Point::Point(const Point& other)
{
	x_ = other.x_;
	y_ = other.y_;
}
void Point::setX(double x_)
{
	this->x_ = x_;
}
void Point::setY(double y_)
{
	this->y_ = y_;
}
double Point::getX() const
{
	return x_;
}
double Point::getY() const
{
	return y_;
}
bool Point::isEqual(const Point& other)
{
	if (x_ == other.x_ && y_ == other.y_)
	{
		return true;
	}
	return false;
}
void Point::move(double k)
{
	x_ += k;
	y_ += k;
}
double Point::getDistance(const Point& other)
{
	return sqrt(pow((x_ - other.x_), 2) + pow((y_ - other.y_), 2));
}