#include<iostream>
#include<fstream>
#include "student.h"

using namespace std;

void displayStudent(const Student& student)
{
  cout << student.getFirstName() << " "
       << student.getMi() << " "
       << student.getLastName() << " "
       << student.getScore() << endl;
}

int main()
{
  fstream binaryio;
  binaryio.open("student.dat", ios::out | ios::binary);

  Student stu1("John", 'T', "Smith", 90);
  Student stu2("Eric", 'K', "Jones", 80);
  Student stu3("Bob", 'T', "Green", 70);
  Student stu4("Susan", 'K', "King", 60);

  binaryio.write(reinterpret_cast<char*>(&stu1), sizeof(Student));
  binaryio.write(reinterpret_cast<char*>(&stu2), sizeof(Student));
  binaryio.write(reinterpret_cast<char*>(&stu3), sizeof(Student));
  binaryio.write(reinterpret_cast<char*>(&stu4), sizeof(Student));

  binaryio.close();

  binaryio.open("student.dat", ios::in | ios::binary);

  Student studentNew;
  binaryio.read(reinterpret_cast<char*>(&studentNew), sizeof(Student));
  displayStudent(studentNew);
  binaryio.close();
  
  return 0;
}
