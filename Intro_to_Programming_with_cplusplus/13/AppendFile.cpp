#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  fstream inout;

  inout.open("city.txt", ios::out);
  inout << "Dallas" << " " << "Houston" << " " << "Atlanta" << endl;
  inout.close();

  inout.open("city.txt", ios::out | ios::app);

  inout << "Hangzhou" << " " << "Beijing" << endl;
  inout.close();

  string city;
  inout.open("city.txt", ios::in);
  while(inout>>city)
    {
      cout << city << endl;
    }
  inout.close();
  return 0;
}
