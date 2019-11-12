#include <iostream>
#include <cassert>
#include "setb.h"
#include <cstdlib>

using namespace std;

set::set() // postcondition: empty set has been created
{ //initialize
    head_ptr=NULL;
    used=0;

}
set::~set() // postcondition: set has been deallocated
{
    list_clear(head_ptr);
    used=0;
}
set::set(const set &source) // postcondition: a copy of source has been created
{
    node* tail_ptr;
    list_copy(source.head_ptr,head_ptr,tail_ptr);
    used=source.used;
 }
set& set::operator=(const set &source)
{
   if(this==&source)
       return *this;

   list_clear(head_ptr);
    node* tail_ptr;
    list_copy(source.head_ptr,head_ptr,tail_ptr);
    used=source.used;
    return *this;

}
void set::insert(const set::value_type &entry)
{ // postcondition: entry is in the set

     if(used==0)
     {
         list_head_insert(head_ptr,entry);
     }
     else
     {
         list_insert(head_ptr,entry);
     }
     used++;
}

void set::remove(const set::value_type &entry)
{ // postcondition: entry is not in the set
     assert(used!=0);
     //assert(this->contains(entry));

     if(head_ptr->link()==NULL)
     {
         list_head_remove(head_ptr);
     }
     else
     {
         node* curr = NULL;
         node* to_remove = list_search(head_ptr,entry);
         for (curr = this->head_ptr; curr->link() != to_remove; curr=curr->link())
         {         }
         list_remove(curr);
     }
     used--;

}
set::size_type set::size() const
{ // postcondition: number of elements in the set has been returned
    return used;
}
bool set::contains(const set::value_type &entry) const
{ // postcondition: whether entry is in the set has been returned
    if(used==0)
        return false;

    if(list_search(head_ptr,entry)==NULL)
        return false;
    return true;

}
set set_union (const set &s1, const set &s2)
{ //postcondition: union of s1 & s2 has been returned
     set setUnion=s1;

    for(node *a=s2.head_ptr;a!=NULL;a=a->link())
    {
        setUnion.insert(a->data());
    }
    return setUnion;

}
set set_intersection (const set &s1, const set &s2)
{ // postcondition: intersection of s1 & s2 has been returned
    set setInt;

    for(node*a=s1.head_ptr;a!=NULL;a=a->link())
    {
        if(s2.contains(a->data()))
        {
            setInt.insert(a->data());
        }
    }
    return setInt;
}

set set_difference(const set &s1, const set &s2)
{ // postcondition: difference of s1 - s2 has been returned
    set setDiff = set_union(s1,s2);

    for(node*a=setDiff.head_ptr;a!=NULL;a=a->link())
    {
        if(s1.contains(a->data())&&s2.contains(a->data()))
            setDiff.remove(a->data());
    }
    /*for(node *a=s2.head_ptr;a!=NULL;a=a->link())
    {
        if(!s1.contains(a->data()))
        {
            setDiff.insert(a->data());
        }
    }*/
    return setDiff;
}
bool is_subset(const set &s1, const set &s2)
{ // postcondition: returned whether s1 is a subset of s2
    for(node*a=s2.head_ptr;a!=NULL;a=a->link())
    {
        if(!s2.contains(s1.head_ptr->data())) //return false if value isn't in s2
            return false;
    }
    return true;
}
bool operator==(const set &s1, const set &s2)
{ // postcondition: returned whether s1 & s2 are equal
    if(s1.used!=s2.used)
    {
        return false;
    }
    for(node*a=s2.head_ptr;a!=NULL;a=a->link())
    {
        if(!s1.contains(a->data()))
            return false;
    }

    return true;
}
std::ostream& operator<<(std::ostream &output, const set &s)
{ // postcondition: s has been displayed on output
     int a=s.used;
     for(node*a=s.head_ptr;a!=NULL;a=a->link())
     {
         output<<a->data()<<" ";
     }
     return output;
}



