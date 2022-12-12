
#include "Point.h"
#include <iostream>


using namespace std;
double radius;
Point const origin(0.0, 0.0);
bool isPointInCircle(const Point& point, double rad);
void input(Point& point);


int main()
{

    Point p1(999, 999);
    Point p2;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    while (true)
    {
        cout << "Enter a point: " << endl;
        input(p2);

        if(p2.getX() == 0.0 && p2.getY() == 0.0)
        {
            cout << "Cooridnates of te closest point to the origin: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
            break;
        }
        if (p2.getDistance(origin) < p1.getDistance(origin))
        {
            
            p1.setX(p2.getX());
            p1.setY(p2.getY());
        }

   
    }
   

    if (!cin)
    {
        cout << "This can be only number!";
        exit(-1);
    }
    Point point1;
    input(point1);
    

    if (isPointInCircle(point1, radius))
    {
        cout << "Point is in circle";
    }
    else cout << "Point is not in circle";
}


bool isPointInCircle(const Point& point, double rad)
{
    if ((point.getX() <= radius) && (point.getY() <= radius))
    {
        return true;
    }
    else return false;

}
void input(Point& point)
{
    double inputX;
    double inputY;
    cout << "Enter Point X: " << endl;
    cin >> inputX;
    if (!cin)
    {
        cout << "This can be only numbers!";
        exit(-1);
    }
    cout << "Enter Point Y: " << endl;
    cin >> inputY;
    if (!cin)
    {
        cout << "This can be only numbers!";
        exit(-1);
    }

    point.setX(inputX);
    point.setY(inputY);

}


