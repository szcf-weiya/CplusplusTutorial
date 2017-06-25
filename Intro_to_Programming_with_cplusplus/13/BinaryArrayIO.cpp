#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  const int SIZE = 5;
  fstream binaryio;
  binaryio.open("array.dat", ios::out|ios::binary);
  double array[SIZE] = {3.4, 1.3, 2.5, 5.66, 6.9};
  binaryio.write(reinterpret_cast<char*>(&array), sizeof(array));
  binaryio.close();

  binaryio.open("array.dat", ios::in | ios::binary);
  double result[SIZE];
  binaryio.read(reinterpret_cast<char*>(&result), sizeof(result));
  binaryio.close();

  for (int i = 0; i < SIZE ; i++)
    cout << result[i] << endl;
  return 0;
}
