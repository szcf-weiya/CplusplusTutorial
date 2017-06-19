#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s("Welcome");
  cout << s << endl;

  s.assign(4, 'G');
  
  // s.append("to C and C++", 1, 5);
  cout << s << endl;
}
