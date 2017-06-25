#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream input("score.txt");

  double sum = 0;
  double number;
  /*
  while(!input.eof())
    {
      input >> number;
      // fix error
      if (input.eof()) break;
      cout << number << " ";
      sum += number;
    }
  */
  while(input >> number)
    {
      cout << number << " ";
      sum += number;
    }
  
  cout << endl
       << sum << endl;
  input.close();
  return 0;
}
