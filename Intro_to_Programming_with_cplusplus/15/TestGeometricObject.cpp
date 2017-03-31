#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include <iostream>

using namespace std;

int main()
{
  GeometricObject shape;
  shape.setColor("red");
  shape.setFilled("true");
  cout << shape.toString() << endl
       << " color: " << shape.getColor()
       << " filled: " << (shape.isFilled() ? "true" : "false") << endl;

  Circle circle(5);
  circle.setColor("black");
  circle.setFilled(false);
  cout << circle.toString() << endl
       << " color: " << circle.getColor()
       << " filled: " << (circle.isFilled() ? "true" : "false")
       << " radius: " << circle.getRadius()
       << " area: " << circle.getArea()
       << " perimeter: " << circle.getPerimeter() << endl;
  return 0;
}
