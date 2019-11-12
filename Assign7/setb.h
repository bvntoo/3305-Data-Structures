#ifndef _SET_H
#define _SET_H

#include <cstdlib>
#include <iostream>
#include "node1.h"

using namespace main_savitch_5;

template <typename T>
class set
{
public:

    set();
// postcondition: empty set has been created

    ~set();
// postcondition: set has been deallocated

    set (const set<T>& source);
    // postcondition: a copy of source has been created

    set<T>& operator = (const set& source);
    // postcondition:

    void insert (const T& entry);
    // postcondition: entry is in the set

    void remove (const T& entry);
// postcondition: entry is not in the set

    size_t size() const;
// postcondition: number of elements in the set has been returned

    bool contains (const T& entry) const;
// postcondition: whether entry is in the set has been returned

    template <typename U>
    friend set<U> set_union (const set<U>& s1, const set<U>& s2);
    //postcondition: union of s1 & s2 has been returned

    template <typename U>
    friend set<U> set_intersection (const set<U>& s1, const set<U>& s2);
    // postcondition: intersection of s1 & s2 has been returned

    template <typename U>
    friend set<U> set_difference (const set<U>& s1, const set<U>& s2);
// postcondition: difference of s1 - s2 has been returned

    template <typename U>
    friend bool is_subset (const set<U>& s1, const set<U>& s2);
// postcondition: returned whether s1 is a subset of s2

    template <typename U>
    friend bool operator == (const set<U>& s1, const set<U>& s2);
    // postcondition: returned whether s1 & s2 are equal

    template <typename U>
    friend std::ostream& operator << (std::ostream& output, const set<U>& s);
// postcondition: s has been displayed on output

private:
    node<T> *head_ptr;
    size_t used;
};

#include "setb.template"

#endif

