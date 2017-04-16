# include <iostream>
# include <string>
using namespace std;

template<typename T>
T maxValue(const T& value1, const T& value2)
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

  
  cout << "Maximum between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;
  
  // NBC and ABC are C-strings, compare the address
  //  cout << maxValue("NBC", "ABC") << endl;
  
  return 0;
}

// Caution:
// 1) the two values have the same type
// 2) the two values can be compared using the > operator

