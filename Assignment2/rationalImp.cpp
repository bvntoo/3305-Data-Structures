//
// Created by Leeford Nduru on 9/2/2019.
//

#include "rational.h"
#include <cstdlib>
#include <cassert>
#include <iostream>

rational::rational(int n, int d)
{
    assert(d!=0);
    num=n;
    denom=d;

}
int rational::get_num() const
{
    return num;
}
int rational::get_denom() const
{
    return denom;
}
void rational::reduce()
{
   int a= gcd(num, denom);
   num=num/a;
   denom=denom/a;

}

rational operator + (const rational& r1, const rational& r2)
{

    int denomLcm= lcm(r1.get_denom(),r2.get_denom());
    int num1= ((r1.get_num()*gcd(r1.get_num(),denomLcm)) + (r2.get_num()*gcd(r2.get_num(),denomLcm)));

    rational r3 (num1, denomLcm);
    return r3;
}
rational operator - (const rational& r1, const rational& r2)

{
    int denomLcm= lcm(r1.get_denom(),r2.get_denom());
    int num1= ((r1.get_num()*gcd(r1.get_num(),denomLcm)) - (r2.get_num()*gcd(r2.get_num(),denomLcm)));

    rational r3 (num1, denomLcm);
    return r3;
}
rational operator * (const rational& r1, const rational& r2)
{
    int a= r1.get_num()*r2.get_num();
    int b =r1.get_denom()*r2.get_denom();

    rational r3(a,b);
    return r3;
}
rational operator / (const rational& r1, const rational& r2)
{
    assert(r2==0);
    int a= r1.get_num()*r2.get_denom();
    int b =r1.get_denom()*r2.get_num();

    rational r3(a,b);
    return r3;
}

bool operator == (const rational& r1, const rational& r2)
{
    return (r1.get_num() == r2.get_num()) && (r1.get_denom() == r2.get_denom());
}
bool operator !=(const rational& r1, const rational& r2)
{
    return !(r1==r2);
}
bool operator <(const rational& r1, const rational& r2)
{
    if((r1.get_denom() > r2.get_denom()))
    {
        if(r2.get_num() >0)
            return true;
    }
    return false;
}
bool operator <= (const rational& r1, const rational& r2)
{
    if((r1.get_denom() >= r2.get_denom()))
    {
        if(r2.get_num() >0 || operator==(r1,r2))
            return true;
    }
    return false;
}
bool operator > (const rational& r1, const rational& r2)
{
    if((r1.get_denom() < r2.get_denom()))
    {
        if(r1.get_num() >0)
            return true;
    }
    return false;
}
bool operator >= (const rational& r1, const rational& r2)
{
    if((r1.get_denom() <= r2.get_denom()))
    {
        if(r1.get_num() >0 || operator==(r1,r2))
            return true;
    }
    return false;

}
std::ostream& operator << (std::ostream& out, const rational& r)
{
    out<< r.get_num() << "/" << r.get_denom();
    return out;
}

int gcd(int a, int b) //extra function for performing the GCD
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int lcm(int a, int b)
{
    return(a*b)/gcd(a,b);
}