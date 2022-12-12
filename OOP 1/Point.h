#pragma once
#include <iostream>
class Point 
{
private:
	double x_;
	double y_;
public:
	Point();
	Point(double x, double y);
	Point(const Point& other);
	void setX(double x);
	void setY(double y);
	double getX() const;
	double getY() const;
	double getDistance(const Point& other);
	bool isEqual(const Point& other);
	void move(double K);
	~Point() = default;
};
