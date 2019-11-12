#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "set.h"

using namespace std;

set::set(set::size_type initial_capacity)
{ // postcondition: empty set with initial_capacity has been created

    capacity=initial_capacity;
    data= new value_type[initial_capacity];
    used=0;

}
set::~set()
{ // postcondition: all dynamically allocated memory has been deallocated
    delete [] data;
    used=0;
}
set::set(const set &s)
{ // copy of s has been created;
    data = new value_type[s.capacity];
    capacity=s.capacity;
    used=s.used;
    copy(s.data, s.data + used,data);
}

set& set::operator=(const set& s)
{ // postcondition: exact copy of s has been assigned to the current set object

    set::value_type *new_data;
    if(this==&s)


    if(capacity!=s.capacity)
    {
        new_data = new value_type[s.capacity];
        delete [] data;
        data= new_data;
        capacity=s.capacity;
    }
    used=s.used;
    copy(s.data, s.data + used, data);
    return *this;
}
bool set::erase(const set::value_type &target)
{ // postcondition: returned true if target was removed from set otherwise false if target was not in the set
    if(used==0)
        return false;
    for(int a=0;a<used;a++)
    {
        if(data[a]==target)
        {
            data[a]=data[used-1];
            used--;
            return true;
        }
    }
    return false;

}
bool set::insert(const set::value_type &entry)
{ // postcondition: if 'entry' was not in the set(return true), then entry has been added
    //               otherwise if 'entry' was in the set nothing was done (return false)
    if(used==0)
    {
        data[used]=entry;
        ++used;
        return true;
    }
    else if(used==capacity)
    {
        reserve(used+1);
        for(int a=used-1;a>=0;a--)
        {
            if(data[a]==entry)
                return false;
        }
        data[used]=entry;
        ++used;
        return true;
    }
    else
    {
        for(int a=used-1;a>=0;a--)
        {
            if(data[a]==entry)
                return false;
        }
        data[used]=entry;
        ++used;
        return true;
    }

}
void set::operator+=(const set &addend)
{ // postcondition: non-duplicating elements from addend have been added to the set
    if(used+ addend.used > capacity)
        reserve(used+addend.used);

    copy(addend.data, addend.data + addend.used, data + used);

    used+=addend.used;
}
set::size_type set::size() const
{ // postcondition: number of elements in the set has been returned
    return used;
}
bool set::contains(const set::value_type &target) const
{ // postcondition: returned whether target is in the set
    value_type inp= target;
    if(used==0)
        return false;
    for(int a=0;a<used;a++)
    {
        if(data[a]==inp)
            return true;
    }
    return false;
}
std::ostream& operator<<(std::ostream &output, const set &s)
{
    int a=s.used;
    output<<"[ ";
    for(int b=0; b<a;b++)
    {
        output<<s.data[b]<<" ";
    }
    output<<"]";
    return output;
}
void set::reserve(set::size_type new_capacity)
{ // precondition: size() <= new_capacity
    // postcondition: capacity is new_capacity
    if(size()<=new_capacity)
    {
        capacity=new_capacity;
    }
}