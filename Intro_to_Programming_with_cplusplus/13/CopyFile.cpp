#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  cout << "Enter a source file name: ";
  string inputFilename;
  cin >> inputFilename;

  cout << "Enter a target file name: ";
  string outputFilename;
  cin >> outputFilename;

  ifstream input(inputFilename.c_str());
  ofstream output(outputFilename.c_str());

  if (input.fail())
    {
      cout << inputFilename << " does not exist" << endl;
      cout << "Exit program" << endl;
      return 0;
    }

  /*
  char ch = input.get();
  while(!input.eof())
    {
      output.put(ch);
      ch = input.get();
    }
  */
  // if replace with the following code
  // the new file will be one byte larger than the original one
  //
  // the last character is read from the input using input.get()
  // input.eof() is still false
  // afterward, the program attempts to read another character, input.eof() will be true
  while(!input.eof())
    {
      output.put(input.get());
    }
  
  

  input.close();
  output.close();

  cout <<"\nCopy Done" << endl;
  return 0;
  
}
