#include<iostream>
#include<cstdlib>
using namespace std;

int* reverse(const int* list, int size)
{
  //  int result[6];
  /*
  int* result;
  result = (int*)malloc(sizeof(int)*6);
  */
  int* result = new int[size];
  for (int i = 0, j = size - 1; i < size ; i++, j--)
    result[j] = list[i];
  return result;
}


void printArray(const int* list, int size)
{
  for (int i = 0; i < size; i++)
    cout << list[i] << " ";
  
}

int main()
{
  /*
  int list[] = {1,2,3,4,5,6};
  int* p = reverse(list, 6);
  printArray(p, 6);
  */
  int x = 10;
  int* px = &x;
  cout << endl;
  double* p1 = new double;
  double* p2 = p1;
  *p2 = 5.4;
  //  delete p1;
  cout << *p2 << endl;

  string s1;
  string *p = &s1;
  return 0;
}
