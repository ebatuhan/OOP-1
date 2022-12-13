#include "Triangle.h"
#include "Point.h"
#include <iostream>
#include <cmath>
#include <algorithm>

//Constructors
Triangle::Triangle()
{
	this->a_ = new Point();
	this->b_ = new Point();
	this->c_ = new Point();
}
Triangle::Triangle(const Point& a, const Point& b, const Point& c)
{
	this->a_ = new Point(a);
	this->b_ = new Point(b);
	this->c_ = new Point(c);
}
Triangle::Triangle(const Triangle& other_)
{
	this->a_ = new Point(*other_.a_);
	this->b_ = new Point(*other_.a_);
	this->c_ = new Point(*other_.a_);
}

//Set and Get
void Triangle::setA(const Point& a)
{
	this->a_->setX(a.getX());
	this->a_->setY(a.getY());

}
void Triangle::setB(const Point& a)
{
	this->b_->setX(a.getX());
	this->b_->setY(a.getY());
}
void Triangle::setC(const Point& a)
{
	this->c_->setX(a.getX());
	this->c_->setY(a.getY());

}

Point Triangle::getA() const
{
	return Point(*a_);
}
Point Triangle::getB() const
{
	return Point(*b_);
}
Point Triangle::getC() const
{
	return Point(*c_);
}

//Methods
bool Triangle::isTriangle() const
{
	double AB = this->a_->getDistance(this->getB());
	double AC = this->a_->getDistance(this->getC());
	double BC = this->b_->getDistance(this->getC());
	
	if ((abs(BC) - abs(AC) < AB && BC + AC > AB) && (abs(AB) - abs(AC) < BC && AB + AC > BC) && (abs(AB) - abs(BC) < AC && AB + BC > AC))
	{
		return true;
	}
	else
		return false;
}
void Triangle::move(double k) const
{
	this->a_->move(k);
	this->b_->move(k);
	this->c_->move(k);
}
double Triangle::getPerimeter() const
{
	double AB = this->a_->getDistance(this->getB());
	double AC = this->a_->getDistance(this->getC());
	double BC = this->b_->getDistance(this->getC());
	return AB + AC + BC;
}
bool Triangle::isEqual(const Triangle& other_) const
{
	return this->a_->isEqual(other_.getA())
		&& this->b_->isEqual(other_.getB())
		&& this->c_->isEqual(other_.getC());
}
double Triangle::getArea() const
{
	return abs(this->a_->getX() * this->b_->getY() + this->b_->getX() * this->c_->getY() + this->c_->getX() * this->a_->getY() - this -> a_->getY() *this->b_->getX() - this->b_->getY() * this->c_->getX() - this->c_->getY() * this->a_->getX()) / 2;
}


//Operator Overloading
ostream& operator<<(ostream& os, const Triangle& other_)
{
	Point* p1 = new Point(other_.getA());
	Point* p2 = new Point(other_.getB());
	Point* p3 = new Point(other_.getC());
	os << "(" << *p1 << "; " << *p2 << "; " << *p3 << ")";
	delete p1;
	delete p2;
	delete p3;
	return os;
}

istream& operator>>(istream& is, const Triangle& other_)
{
	cout << "A: ";
	is >> *other_.a_;
	cout << "B: ";
	is >> *other_.b_;
	cout << "C: ";
	is >> *other_.c_;
	

	if (other_.isTriangle())
	{
		return is;
	}
	else 
	{
		cout << "Thats not a triangle. ";
		abort;
	}
}

//Destructor
Triangle::~Triangle()
{
	delete a_;
	delete b_;
	delete c_;
}
