#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
  ofstream output;

  output.open("formattedscores.txt");

  output << setw(3) << "John"
	 << setw(2) << "T"
	 << setw(6) << "Smith"
	 << setw(4) << 90 << endl;

  output << setw(6) << "Eric"
	 << setw(2) << "K"
	 << setw(6) << "Jones"
	 << setw(4) << 80 << endl;
  output.close();
}
