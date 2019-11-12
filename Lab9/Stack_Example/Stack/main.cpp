#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    stack<string> strst;
    cout << "is empty? " << strst.isEmpty() << endl;
    cout << "is full?  "  << strst.isFull() << endl;

    strst.push("able");

    cout << "is empty? " << strst.isEmpty() << endl;
    cout << "is full?  "  << strst.isFull() << endl;


    string s =  strst.pop();

    cout << "is empty? " << strst.isEmpty() << endl;
    cout << "is full?  "  << strst.isFull() << endl;
    cout << "popped: " << s << endl;

    strst.push("able");
    strst.push("baker");
    cout << strst.pop() << endl;
    cout << strst.pop() << endl;

}