# include <iostream>
# include <string>
using namespace std;

template<typename T>
T maxValue(T value1, T value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}

template<typename T1, typename T2>
T1 maxValue2(T1 value1, T2 value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}

int main()
{
  cout << "Maximum between 1 and 3 is " << maxValue(1, 3) << endl;
  cout << "Maximum between 1.5 and 0.3 is " << maxValue(1.5, 0.3) << endl;
  cout << "maxValue2(1, 2.5) = " << maxValue2(1, 2.5) << endl;
  cout << "maxValue2(1.4, 2.5) =  " << maxValue2(1.4, 2.5) << endl;
  cout << "maxValue2(1.5, 2) =  " << maxValue2(1.5, 2) << endl;

  
  cout << "Maximum between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;
  cout << "Maximum between \"NBC\" and \"ABC\" is " << (string("NBC") > string("ABC")) << endl;
  // NBC and ABC are C-strings, compare the address
  cout << maxValue("NBC", "ABC") << endl;
  
  return 0;
}
