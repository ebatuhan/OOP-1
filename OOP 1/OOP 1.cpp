#include "Triangle.h"
#include "Point.h"
#include <iostream>


using namespace std;
double radius;
Point const origin(0.0, 0.0);
bool isPointInCircle(const Point& point, double rad);
void input(Point& point);


int main()
{
    Point *p1 = new Point;
    Point *p2 = new Point;
    Point *p3 = new Point;
    p1->setX(0);
    p2->setX(0);
    p3->setX(0);
    p1->setY(5);
    p2->setY(0);
    p3->setY(0);
    Triangle* t1 = new Triangle;
    t1->setA(*p1);
    t1->setB(*p2);
    t1->setC(*p3);

    cout << t1->getAB();

    delete t1;
    delete p1, p2, p3;

    

    

    /*  Point point1;
      Point p1(999, 999);
      Point p2;
      while (true)
      {
          cout << "Entering a point." << endl;
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
      cout << "Enter a radius of the circle and a point to see if that point inside of the circle." << endl;
      cout << "Enter the radius of the circle: ";
      cin >> radius;
      if (!cin)
      {
          cout << "This can be only number!";
          exit(-1);
      }

      input(point1);


      if (isPointInCircle(point1, radius))
      {
          cout << "Point is in the circle";
      }
     /*else cout << "Point is not in the circle";*/
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


