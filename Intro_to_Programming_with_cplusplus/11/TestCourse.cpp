#include<iostream>
#include<string>
#include "Course.h"

using namespace std;

int main()
{
  Course course1 ("DS", 10);

  course1.addStudent("weiya");
  course1.addStudent("weiya2");
  course1.addStudent("weiya3");
  course1.addStudent("weiya4");

  cout << course1.getNumberOfStudents() << endl;
  string* stu = course1.getStudents();
  for (int i = 0; i < course1.getNumberOfStudents(); i++)
    cout << stu[i] << endl;

  course1.dropStudent("weiya2");
  cout << course1.getNumberOfStudents() << endl;
  //  string* stu = course1.getStudents();
  stu = course1.getStudents();
  for (int i = 0; i < course1.getNumberOfStudents(); i++)
    cout << stu[i] << endl;

  return 0;
}
