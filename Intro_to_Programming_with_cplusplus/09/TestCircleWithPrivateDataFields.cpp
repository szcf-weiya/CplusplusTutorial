#include <iostream>
#include "CircleWithPrivateDataFields.h"
using namespace std;

int main()
{
  Circle circle1;
  Circle circle2(5.0);

  cout << "The area of the circle of radius "
       << circle1.getRadius() << " is " << circle1.getArea() << endl;

  circle1.setRadius(100);
  cout << "The area of the circle of radius "
       << circle1.getRadius() << " is " << circle2.getArea() << endl;
}
