#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::out|ios::binary);
  string s = "Hangzhou";
  binaryio.write(s.c_str(), s.size());
  int value = 100;
  // wrong!!  binaryio.write(value, sizeof(value));
  binaryio.write(reinterpret_cast<char*>(&value), sizeof(value));
  binaryio.close();
  cout << "Done" << endl;
  
}
