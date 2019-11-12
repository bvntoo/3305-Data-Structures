#include <iostream>
#include "dequeue.h"

using namespace std;

int main(int argc, char **argv)
{
    deque<int> dq;
    cout << dq << endl;
    for (int i = 0; i < 10; i++)
    {
        dq.push_front (i);
    }
    cout << dq << endl;
    dq.pop_back();
    cout << dq << endl;
    dq.push_front (24);
    cout << dq << endl;
    return 0;
}

