# include <iostream>
# include "Circle.h"

using namespace std;

int main()
{
  Circle circle1;
  Circle circle2(5.0);

  cout << "The area of the circle of radius "
       << circle1.radius << " is " << circle1.getArea() << endl;
  return 0;
}
