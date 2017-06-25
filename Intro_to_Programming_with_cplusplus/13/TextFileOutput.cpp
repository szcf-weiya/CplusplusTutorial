#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  ofstream output("out.txt");
  output << "John" << " "  << "T" << " " << "Smith" << " " << 90 << endl;
  output << "Eric" << " "  << "K" << " " << "Jones" << " " << 85 << endl;
  
  output.close();
  return 0;
    
}
