#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void showState(const fstream&);

int main()
{
  fstream inout;

  inout.open("tmp.txt", ios::out);
  inout << "Dallas";
  cout << "Dallas operation (no errors)" << endl;
  showState(inout);
  inout.close();

  inout.open("temp.txt", ios::in);

  string city;
  inout >> city;
  cout << "End of file (no errors)" << endl;
  showState(inout);

  inout.close();

  inout >> city;
  cout << "Bad operation (errors)" << endl;
  showState(inout);

  return 0;
}

void showState(const fstream& stream)
{
  cout << "Stream status: " << endl;
  cout << " eof(): " << stream.eof() << endl;
  cout << " fail(): " << stream.fail() << endl;
  cout << " bad(): " << stream.bad() << endl;
  cout << " good(): " << stream.good() << endl;
  
}
