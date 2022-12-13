#include "Triangle.h"
#include "Point.h"
#include <iostream>
#include <limits>

const Point origin(0, 0);
const Point posCircle(origin);

void moveTriangle();
void getPerimeter();
void canMakeSquare();
void makeTriangle();
void funcPoints();
void clear();
void funcCircle();
void movePoint();
bool isPointInCircle(double radius, const Point& p);
bool isEqualSquare(Triangle& t, Triangle& t_);

using namespace std;


int main()
{
	cout << "Menu" << endl << "Select a option: " << endl;
	cout << "1) Set more than 1 point and see the closest one to the origin. " << endl;
	cout << "2) Set a point, and the radius of the circle, to see that point inside of the circle or not. " << endl;
	cout << "3) Set a point and move it. " << endl;
	cout << "4) Set a triangle. " << endl;
	cout << "5) Set 2 triangles and check if they can make a square. " << endl;
	cout << "6) Set a triangle and get perimeter of it. " << endl;
	cout << "7) Set a triangle and move it. " << endl;

	int MENU;

	cin >> MENU;
	if (!cin)
		cout << "Enter a Number!";

	if (MENU < 1 || MENU > 7)
	{
		cout << "No such a option";
	}

	if (MENU == 1)
		funcPoints();
	if (MENU == 2)
		funcCircle();
	if (MENU == 3)
		movePoint();
	if (MENU == 4)
		makeTriangle();
	if (MENU == 5)
		canMakeSquare();
	if (MENU == 6)
		getPerimeter();
	if (MENU == 7)
		moveTriangle();



}
bool isEqualSquare(Triangle& t, Triangle& t_)
{
	if (t.getArea() == t_.getArea())
	{
		return true;
	}

	else
		return false;
}
bool isPointInCircle(double radius, Point& p)
{
	return (radius >= p.getDistance(posCircle));
}
void funcPoints()
{
	Point min(-32767, -32767);
	Point currentP;
	while (true)
	{
		cout << "Enter a Point (Enter the coordinates '0,0' to finish): ";
		cin >> currentP;
		if (!cin)
		{
			cout << "Coordinates must be a real number";
			exit(-1);
		}
		if (currentP.getDistance(origin) < min.getDistance(origin) && currentP.getX() != 0 && currentP.getY() != 0)
		{
			min.setX(currentP.getX());
			min.setY(currentP.getY());
		}
		if (currentP.getX() == 0 && currentP.getY() == 0)
		{
			cout << "Closest point to origin: " << min << endl;
			break;
		}

	}
}
void funcCircle()
{
	Point a;
	double radius;
	cout << "Enter A point: ";
	cin >> a;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}
	cout << endl << "Enter the radius of the circle: ";
	cin >> radius;
	if (!cin)
	{
		cout << "Radius must be a real number";
		exit(-1);
	}
	if (!isPointInCircle(radius, a))
	{
		cout << "Entered point is not in the circle with the radius " << radius << " unit.";
	}
	else
	{
		cout << "Entered point is in the circle with the radius " << radius << " unit.";
	}

}
void movePoint()
{
	Point p;
	double k;
	cout << "Enter a Point" << endl;
	cin >> p;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}
	cout << "Enter how many units you want to move this point: " << endl;
	cin >> k;
	p.move(k);
	cout << "Point is moved by " << k << " units.New position of the point : ";
	cout << p;
}
void clear() {
	std::cout << "\x1B[2J\x1B[H";
}
void makeTriangle()
{
	Triangle* t = new Triangle;
	cin >> *t;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}
	cout << *t;
	delete t;
}
void canMakeSquare()
{
	Triangle *t1 = new Triangle;
	Triangle* t2 = new Triangle;
	cout << "Enter the first triangle: " << endl;
	cin >> *t1;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}
	
		cout << "Enter the second triangle : " << endl;
		cin >> *t2;

		if (!cin)
		{
			cout << "Coordinates must be a real number";
			exit(-1);
		}
		cout << endl;
	
		if (t1->isTriangle())
		{
			if (t2->isTriangle())
			{
				if (isEqualSquare(*t1, *t2))
					cout << "They can make square. ";
				else
					cout << "They can`t make square. ";
			}
		}

	

	delete t1;
	delete t2;
}
void getPerimeter()
{
	Triangle* t = new Triangle;
	cout << "Enter the triangle: " << endl;
	cin >> *t;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}
	if (t->isTriangle())
	{
		cout << t->getPerimeter();
	}
	delete t;
}
void moveTriangle()
{
	Triangle *t = new Triangle;
	double k;
	cout << "Enter the triangle: " << endl;
	cin >> *t;
	if (!cin)
	{
		cout << "Coordinates must be a real number";
		exit(-1);
	}

	if (t->isTriangle()){
	cout << endl << "Enter how many units you want to move the triangle: ";
	
	
		cin >> k;
		if (!cin)
		{
			cout << "Please enter a number";
			exit(-1);
		}

		t->move(k);
		cout << endl << "The triangle moved by " << k << " units, new poisiton of the triangle: " << *t;
	}
	delete t;

}