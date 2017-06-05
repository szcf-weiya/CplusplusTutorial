# include <iostream>
using namespace std;
class NoVirtual {
  int a;
public:
  void x() const {}
  int i() const {return 1;}
};

class OneVirtual {
  int a, b, c;
public:
  virtual void x() const {}
  int i() const {return 1;}
};

class TwoVirtuals {
  int a,b,c,d, e;
public:
  virtual void x() const {}
  virtual int i() const {return 1;}
};


int main() {
  cout << "int: " << sizeof(int) << endl;
  cout << "NoVirtual: "
       << sizeof(NoVirtual) << endl;
  cout << "void* : " << sizeof(void*) << endl;
  cout << "OneVirtual: "
       << sizeof(OneVirtual) << endl;
  cout << "TwoVirtuals: "
       << sizeof(TwoVirtuals) << endl;
}

// Remarks
// int 4
// No: 4
// void* 8
// One: 16 = void* + 8 ( one/two int)
// Two: 16 = void* + 8 ( one/two int)
// One: 24 = void* + 16 ( 3/4 int)
// Two: 16 = void* + 16 ( 3/4 int)
