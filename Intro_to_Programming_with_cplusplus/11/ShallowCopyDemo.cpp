#include<iostream>
#include<string>
#include "Course.h"

using namespace std;


int main()
{
  /*
  string s1("ABC");
  string s2("DABC");

  s1 = string(s2);
  cout << s1 << endl
       << s2 << endl;
  */
  
  Course course1("C++", 10);
  Course course2(course1);

  course1.addStudent("weiya2");
  course2.addStudent("weiya3");

  cout << course1.getStudents()[0] << endl;
  cout << course2.getStudents()[0] << endl;
  

  
  return 0;
}
