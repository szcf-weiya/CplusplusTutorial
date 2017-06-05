#include <iostream>
#include <string>

using namespace std;
class Pet{
public:
  virtual string speak() const {return "";}
};

class Dog : public Pet {
public:
  string speak() const {return "Bark!";}
};

int main(){
  Dog ralph;
  Pet* p1 = &ralph;
  Pet& p2 = ralph;
  Pet p3;
  //late binding for both
  cout << "p1->speak() = " << p1->speak() << endl
       << "p2.speak() = " << p2.speak() << endl
       << "p3.speak() = " << p3.speak() << endl;// early binding
}

// Stroustrup stated that his guideline was, “If you don’t use it, you don’t pay for it.”
