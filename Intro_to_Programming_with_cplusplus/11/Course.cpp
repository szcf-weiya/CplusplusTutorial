#include<iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
  numberOfStudents = 0;
  this->courseName = courseName;
  this->capacity = capacity;
  students = new string[capacity];
}

// custom copy constructor

Course::Course(const Course& course)
{
  courseName = course.courseName;
  numberOfStudents = course.numberOfStudents;
  capacity = course.capacity;
  students = new string[capacity];
  for (int i = 0; i < numberOfStudents ; i++)
    students[i] = course.students[i];
}

Course::~Course()
{
  delete [] students;
}

string Course::getCourseName() const
{
  return courseName;
}

void Course::addStudent(const string& name)
{
  students[numberOfStudents] = name;
  numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
  for (int i = 0; i < numberOfStudents; i++)
    {
      if (students[i] == name)
	{
	  students[i] = students[numberOfStudents-1];
	  numberOfStudents--;
	  return;
	}
    }
  cout << "NOT FOUND" << endl;
}

string* Course::getStudents() const
{
  return students;
}

int Course::getNumberOfStudents() const
{
  return numberOfStudents;
}
