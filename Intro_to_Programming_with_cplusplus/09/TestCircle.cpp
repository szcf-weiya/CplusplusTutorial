# include <iostream>
using namespace std;

class Circle
{
public:
  // The radius of this circle
  double radius;

  // Construct a default circle object
  Circle()
  {
    radius = 1;
  }

  // Construct a circle object
  Circle(double newRadius)
  {
    radius = newRadius;
  }

  // Return the area of this circle
  double getArea()
  {
    return radius * radius * 3.14159;
  }
};// must place a semicolon here

int main()
{
  Circle circle1(1.0);
  Circle circle2(25);
  Circle circle3(125);

  cout << "The area of the circle of radius "
       << circle1.radius << " is " << circle1.getArea() << endl;

  //modify circle radius
  circle1.radius = 100;
  cout << "The area of the circle of radius "
       << circle1.radius << " is " << circle1.getArea() << endl;

  cout << sizeof(circle1) << endl;
  cout << sizeof(circle2) << endl;

  return 0;
}
