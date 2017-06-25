#include<iostream>
#include "Rational.h"
using namespace std;

int main()
{
  Rational r1(4, 2);
  Rational r2(2, 3);

  cout << r1.toString() << " +  " << r2.toString() << " = " << r1.add(r2).toString() << endl;
  Rational r3, r4;
  cin >> r3;
  cin >> r4;
  cout << r3 << " + " << r4 << " = " << r3+r4 << endl;
  //  double d = r3 + 5.1;
  //cout << d << endl;
  return 0;
}
