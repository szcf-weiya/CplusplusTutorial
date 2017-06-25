#ifndef RATIONAL_H
#define RATIONAL_H

#include<string>
using namespace std;

class Rational
{
public:
  Rational();
  Rational(int numerator);
  Rational(int numerator, int denominator);
  int getNumerator() const;
  int getDenominator() const;
  Rational add(const Rational& secondRational) const;
  Rational subtract(const Rational& secondRational) const;
  Rational multiply(const Rational& secondRational) const;
  Rational divide(const Rational& secondRational) const;
  int compareTo(const Rational& secondRational) const;
  bool equals(const Rational& secondRational) const;
  int intValue() const;
  double doubleValue() const;
  string toString() const;
  bool operator<(const Rational& secondRational) const;
  //  Rational operator+(const Rational& secondRational) const;
  int& operator[](int index);
  Rational& operator+=(const Rational& secondRational);
  Rational operator-();
  Rational& operator++();
  Rational operator++(int dummy);

  friend ostream& operator<<(ostream& out, const Rational& rational);
  friend istream& operator>>(istream& in, Rational& rational);

  //  operator double();


  
private:
  int numerator;
  int denominator;
  static int gcd(int n, int d);
};

Rational operator+(const Rational& r1, const Rational& r2);

#endif
