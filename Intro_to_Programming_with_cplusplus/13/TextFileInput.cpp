#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int  main()
{
  ifstream input("out1.txt");

  if (input.fail())
    {
      cout << "NO FILE!" << endl;
      return 0;
    }

  string firstName;
  char mi;
  string lastName;
  int score;

  input >> firstName >> mi >> lastName >> score; //>> endl;
  cout << firstName << mi << lastName << score << endl;

  input >> firstName >> mi >> lastName >> score; //>> endl;
  cout << firstName << mi << lastName << score << endl;


  input.close();
  return 0;
}
