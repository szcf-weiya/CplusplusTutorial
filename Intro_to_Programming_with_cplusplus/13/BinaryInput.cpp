#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::in|ios::binary);
  char s[20];
  int value;
  //  binaryio.read(s, 20);
  binaryio.read(reinterpret_cast<char*>(&value), sizeof(value));
  cout<<"Number of chars read: " << binaryio.gcount() << endl;
  //  s[binaryio.gcount()] = '\0';
  //cout << s << endl;
  cout << value << endl;

  binaryio.close();
  return 0;
}
