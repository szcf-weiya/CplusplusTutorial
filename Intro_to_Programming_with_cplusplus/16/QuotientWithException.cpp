#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cin >> num1 >> num2;

  try
    {
      if (num2 == 0)
	throw num1;
      cout << num1 / num2 << endl;
    }
  catch (int ex)
    {
      cout << "Exception: an integer " << ex << " cannot be divided by zero" << endl;
    }
  return 0;
}
