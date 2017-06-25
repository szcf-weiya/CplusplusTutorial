# include <iostream>
# include <string>
using namespace std;
/*
template<typename T>
void sort(T list[], int listsize)
{
  for (int i = 0; i < listsize; i++)
    {
      // Find the minimum in the list[i...listsize-1]
      T currentMin = list[i];
      int currentMinIndex = i;

      for (int j = i + 1; j < listsize; j++)
	{
	  if (currentMin > list[j])
	    {
	      currentMin = list[j];
	      currentMinIndex = j;
	    }
	}

      // swap list[i] with list[currentMinIndex] if necessary
      if (currentMinIndex != i)
	{
	  list[currentMinIndex] = list[i];
	  list[i] = currentMin;
	}
    }
}

template<typename T>
void printArray(const T list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
    cout << list[i] << " ";
  cout << endl;
}
*/

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
  /*
  int list1[] = {3, 5, 1, 0, 2, 8, 7};
  sort(list1, 7);
  printArray(list1, 7);

  double list2[] = {3.5, 0.5, 1.4, 0.4, 2.5, 1.8, 4.7};
  sort(list2, 7);
  printArray(list2, 7);

  string list3[] = {"Atlanta", "Denver", "Chicago", "Dallas"};
  sort(list3, 4);
  printArray(list3, 4);
*/
  int v1 = 1;
  int v2 = 2;
  swap(v1, v2);
  cout << v1 << " " << v2 << endl;
  
  return 0;
}
