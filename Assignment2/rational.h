#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include <iostream>

class rational
{
  // class invariant: rational number has a positive denominator & is in
  //                  lowest terms
public:
  rational (int n=0, int d = 1);
  // precondition: d is not 0
  // postcondition: rational number with specified attributes has been created
  int get_num() const;
  // returned: numerator of rational number
  int get_denom() const;
  // returned: denominator of rational number

private:
  void reduce();
  // postcondition: rational number satisfies class invariant
  int num;
  int denom;
};

rational operator + (const rational& r1, const rational& r2);
// returned: sum of r1 & r2
rational operator - (const rational& r1, const rational& r2);
// returned: difference of r1 & r2
rational operator * (const rational& r1, const rational& r2);
// returned: product of r1 & r2
rational operator / (const rational& r1, const rational& r2);
//precondition: r2 is not 0
// returned: quotient of r1 & r2
bool operator == (const rational& r1, const rational& r2);
// returned: whether r1 & r2 are equal
bool operator != (const rational& r1, const rational& r2);
// returned: whether r1 & r2 are not equal
bool operator < (const rational& r1, const rational& r2);
// returned: whether r1 < r2
bool operator <= (const rational& r1, const rational& r2);
// returned: whether r1 <= r2
bool operator > (const rational& r1, const rational& r2);
// returned: whether r1 > r2
bool operator >= (const rational& r1, const rational& r2);
// returned: whether r1 >= r2
std::ostream& operator << (std::ostream& out, const rational& r);
// postcondition: r has been sent to out in format n/r
int gcd(int a, int b);
int lcm(int a, int b);
#endif

