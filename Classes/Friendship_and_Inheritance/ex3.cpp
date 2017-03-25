/*
http://blog.csdn.net/luoruiyi2008/article/details/7179788
The protected access label can be thought of as a blend of private and public :

1. Like private members, protected members are inaccessible to users of the class.
2. Like public members, the protected members are accessible to classes derived from this class.
3. In addition, protected has another important property: A derived object may access the protected members of its base class only through a derived object. The derived class has no special access to the protected members of base type objects.
在没有继承的情况下，protected跟private相同。在派生类的时候才出现分化。

注意 drived class和drived object:派生类和派生类对象。第一点和第二点都是针对派生类来说的。

只有在派生类中才可以通过派生类对象访问基类的protected成员。
 */

#include <iostream>
using namespace std;
class Base
{
public:
  Base(){};
  virtual ~Base(){};
protected:
  int int_pro;
};

class A : public Base
{
public:
  A() {};
  A(int da) {int_pro = da;}
  void Print(A &obj){obj.int_pro = 24;}
  void PrintPro(){cout << "The protected data is " << int_pro << endl;}
};

int main()
{
  A aObj;
  A aObj2(5);
  aObj2.PrintPro();
  aObj.Print(aObj2);
  aObj2.PrintPro();

  //aObj.int_pro = 8;
}
