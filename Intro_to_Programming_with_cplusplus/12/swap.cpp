#include<iostream>
using namespace std;

template<typename T>
void swap(T& var1, T& var2)
{
  T tmp = var1;
  var1 = var2;
  var2 = tmp;
}
/*
void swap(int& var1, int& var2)
{
  int tmp = var1;
  var1 = var2;
  var2 = tmp;
}
*/

int main()
{
  int v1 = 1;
  int v2 = 2;
  swap(v1, v2);
  cout << "v1 = " << v1 << endl
       << "v2 = " << v2 << endl;
  return 0;
}
