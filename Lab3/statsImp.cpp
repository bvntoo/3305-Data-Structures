#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string.h>    // Provides memcpy function
#include "stats2.h"

using namespace std;

statistician::statistician()
{
    count=0;
    total=0;
    tinyest=0;
    largest=0;
}

void statistician::next(double r)
{
    if(count==0)
    {
        largest=r;
        tinyest=r;
    }
    else if(r>largest)
    {
        largest=r;
    }
    else if(r<tinyest)
    {
        tinyest=r;
    }
    total+=r;
    count+=1;

}

void statistician::reset()
{
    count=0;
    total=0;
    tinyest=0;
    largest=0;
}

int statistician::length() const
{
    return count;
}

double statistician::sum() const
{
    return total;
}

double statistician::mean() const
{
    if(length()>0)
    {
        double meanOutput=(total/count);
        return meanOutput;
    }
    return 0;
}
double statistician::minimum() const
{
    if(length()>0)
    {
        return tinyest;
    }
    return 0;
}

double statistician::maximum() const
{
    if(length()>0)
    {
        return largest;
    }
    return 0;

}

statistician operator +(const statistician& s1, const statistician& s2)
{
    statistician s3;

    s3.count=s1.length()+s2.length(); //Returns the numbers in both sequence
    s3.total=s1.sum()+s2.sum(); //Returns sum of both S1 and S2
    if(s1.length()==0)
    {
        return s2;
    }
    else if(s2.length()==0)
    {
        return s1;
    }

    if(s2.maximum()>s1.maximum())
     {
        s3.largest=s2.maximum();
     }
    else
        s3.largest=s1.maximum();

    if(s2.minimum()<s1.minimum())
    {
        s3.tinyest= s2.minimum();
    }
    else
        s3.tinyest= s1.minimum();

    return s3;
}
statistician operator *(double scale, const statistician& s)
{
    statistician s3;

    s3.count=s.count;
    s3.total=s.total*scale;
    s3.largest=s.largest*scale;
    s3.tinyest=s.tinyest*scale;

    if(s3.largest<s3.tinyest)
    {
        double a=s3.largest;
        s3.largest=s3.tinyest;
        s3.tinyest=a;
    }

    return s3;

}

bool operator ==(const statistician& s1, const statistician& s2)
{
    if((s1.length()==0) && (s2.length()==0))
    { return true; }
    else
    {
        if((s1.length()==s2.length()) && (s1.mean()==s2.mean()) && (s1.sum()==s2.sum())
           && (s1.maximum()==s2.maximum()) && (s1.minimum()==s2.minimum()))
        {
            return true;
        }
    }
    return false;
}