#include <iostream>
#include <cassert>
#include "set.h"
#include <cstdlib>

using namespace std;

set::set(set::size_type initial_capacity)
{
    capacity=initial_capacity;
    data= new value_type[capacity];
    used=0;

}
set::~set()
{
    delete [] data;
}
set::set(const set &source)
{
    data = new value_type[source.capacity];
    capacity=source.capacity;
    used=source.used;
    copy(source.data, source.data + used,data);
}
set& set::operator=(const set &source)
{
    if(this==&source)
    {

    }
    delete []data;
    used=source.used;
    capacity=source.capacity;
    copy(source.data, source.data + used, data);

    return *this;
}
void set::insert(const set::value_type &entry)
{

    if(used!=0)
    {
        data[used]=entry;
        used++;
    }
    else
    {
        data[used]=entry;
        used++;
    }

}

void set::remove(const set::value_type &entry)
{
    assert(used!=0);

    for(int a=0;a<used+1;a++)
    {
        if(data[a]==entry)
        {
            data[a]=data[used-1];
            used--;
        }
    }

}
set::size_type set::size() const
{
    return used;
}
bool set::contains(const set::value_type &entry) const
{
    if(used==0)
        return false;

    for(int a=0;a<used+1;a++)
    {
        if(data[a]==entry)
            return true;
    }
    return false;
}
set set_union (const set &s1, const set &s2)
{
    set setUnion=s1;

    for(int a=0;a<s2.size();a++)
    {
        setUnion.insert(s2.data[a]);
    }
    return setUnion;

}
set set_intersection (const set &s1, const set &s2)
{
    set setInt;

    for(int a=0;a<s1.size();a++)
    {
        if(s2.contains(s1.data[a]))
        {
            setInt.insert(s1.data[a]);
        }
    }
    return setInt;
}

set set_difference(const set &s1, const set &s2)
{
    set setDiff = set_union(s1,s2);
    set intersec =set_intersection(s1,s2);
    for(int a=0; a<setDiff.size();a++)
    {
        if(setDiff.contains(intersec.data[a]))
            setDiff.remove(intersec.data[a]);
    }

    return setDiff;
}
bool is_subset(const set &s1, const set &s2)
{
    for(int a=0; a<s2.size();a++)
    {
        if(!s2.contains(s1.data[a])) //return false if value isn't in s2
            return false;
    }
    return true;
}
bool operator==(const set &s1, const set &s2)
{
    if(s1.used==s2.used)
    {
        return false;
    }
    for(set::value_type a=0; a<s2.used;a++)
    {
        if(s2.data[a]!=s1.data[a])
            return false;
    }

    return true;
}
std::ostream& operator<<(std::ostream &output, const set &s)
{
    int a=s.used;
    for(int b=0; b<a;b++)
    {
        output<<s.data[b]<<" ";
    }
    return output;
}
set::size_type set::find(const set::value_type &entry) const
{
    for(set::size_type a=0; a<used+1;a++)
    {
        if(data[a]==entry)
        {
            return a;
        }
    }
    return used;
}
void set::resize(unsigned int new_size)
{
    if(size()<=new_size)
    {
        capacity=new_size;
    }
}


