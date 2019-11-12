#include <iostream>
#include <cstdlib>
#include <cassert>
#include "date.h"

using namespace std;

int main ()
{
    date d1(24, 3, 1987);
    assert (d1.get_day() == 24);
    assert (d1.get_month() == 3);
    assert (d1.get_year() == 1987);
    d1.increment();
    assert (d1.get_day() == 25);
    assert (d1.get_month() == 3);
    assert (d1.get_year() == 1987);

    date d2(28, 2, 1987);
    assert (d2.get_day() == 28);
    assert (d2.get_month() == 2);
    assert (d2.get_year() == 1987);
    d2.increment();
    assert (d2.get_day() == 1);
    assert (d2.get_month() == 3);
    assert (d2.get_year() == 1987);

    date d3(28, 2, 1988);
    assert (d3.get_day() == 28);
    assert (d3.get_month() == 2);
    assert (d3.get_year() == 1988);
    d3.increment();
    assert (d3.get_day() == 29);
    assert (d3.get_month() == 2);
    assert (d3.get_year() == 1988);

    date d4(31, 12, 1988);
    assert (d4.get_day() == 31);
    assert (d4.get_month() == 12);
    assert (d4.get_year() == 1988);
    d4.increment();
    assert (d4.get_day() == 1);
    assert (d4.get_month() == 1);
    assert (d4.get_year() == 1989);

    cout << "all tests passed - do endzone celebration dance!" << endl;
    return EXIT_SUCCESS;
}

