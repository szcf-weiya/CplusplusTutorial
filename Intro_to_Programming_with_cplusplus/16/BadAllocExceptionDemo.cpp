#include <iostream>
using namespace std;
int main()
{
  try
    {
      for (int i = 1; i < 100; i++)
	{
	  new int[900000000];
	  cout << i << "succeed" << endl;
	}
    }
  catch(bad_alloc& ex)
    {
      cout << ex.what() << endl;
    }
  return 0;
    
}
