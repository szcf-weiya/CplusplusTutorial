# include <iostream>
using namespace std;

class Person
{
public:
  Person()
  {
    cout << "person's constructor" << endl;
  }

  ~Person()
  {
    cout << "person's destructor" << endl;
  }
};

class Employee: public Person
{
public:
  Employee()
  {
    cout << "employee's constructor" << endl;
  }

  ~Employee()
  {
    cout << "employee's destructor" << endl;
  }
};

class Faculty: public Employee
{
public:
  Faculty()
  {
    cout << "faculty's constructor" << endl;
  }

  ~Faculty()
  {
    cout << "faculty's deconstructor" << endl;
  }
};

int main()
{
  Faculty faculty;
  return 0;
}
