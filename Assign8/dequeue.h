#ifndef _DEQUE_H_
#define _DEQUE_H_

#include <iostream>
#include <cstdlib>

template <typename T>
class deque
{
public:
    static const size_t CAPACITY = 10;

    deque();
    //postcondition: empty deque has been created

    T& front();
    //precondition: deque is not empty
    // returned: reference to element at front of deque

    T front() const;
    // precondition: deque is not empty
    // returned: copy of element at front of deque

    T& back();
    // precondition: deque is not empty
    // returned: reference to element at back of deque

    T back() const;
    // precondition: deque is not empty
    // returned: copy of element at back of deque

    void push_front (const T& entry);
    // precondition: deque is not full
    // postcondition: entry has been inserted at the front
    //                of the deque

    void push_back (const T& entry);
    // precondition: deque is not full
    // postcondition: entry has been inserted at the back
    //                of the deque

    void pop_front();
    // precondition: deque is not empty
    // postcondition: element at front of deque has been removed

    void pop_back();
    // precondition: deque is not empty
    // postcondition: element at back of deque has been removed

    size_t size() const;
    // postcondition: number of elements in deque has been returned

    bool empty() const;
    // returned: whether deque is empty

    bool full() const;
    // returned: whether deque is full has been returned

    template <typename U>
    friend bool operator == (const deque<U>& dq1, const deque<U>& dq2);
    // returned: whether 2 deques are equal - equal is defined
    //           as the deques have the same number of elements &
    //           corresponding elements are equal

    template <typename U>
    friend std::ostream& operator<< (std::ostream& out, const deque<U>& dq);
    // postcondition: dq has been display from front to rear on out

private:
    T data[CAPACITY];     // Circular array
    size_t first;         // Index of item at front of the queue
    size_t last;          // Index of item at rear of the queue
    size_t count;         // Total number of items in the queue

    size_t next_index(size_t i) const;
    // returned: next index in array

    size_t prev_index (size_t i) const;
    // returned: previous index in array
};

#include "dequeue.template"

#endif

