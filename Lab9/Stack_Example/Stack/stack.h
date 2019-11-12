#ifndef STACK_H
#define STACK_H

template <class T>
class stack {
public:
    static const int CAPACITY = 30;

    stack();

    /*
     * Insert an element into the stack
     *
     * Precondition: stack is not full,.
     */
    void push(T element);

    /**
     * Remove an element from the stack and return it
     *
     * Precondition: stack is not empty.
     */
    T pop();


    bool isEmpty() const;

    bool isFull() const;


private:
    /** The current content of the stack will be stored in
     * elements data[0] .. data[size-1]
     *
     * The next element to be inserted will go in data[size]
     *
     * The next element to be removed is in data[size-1], provided that
     *  size >= 1
     */
    T data[CAPACITY];
    int size;

};

#include "stack.template"

#endif // STACK_H
