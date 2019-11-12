#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>

class date
{
    // class invariant: values of year, month, day are in the correct ranges
public:
    date (int d, int m, int y);
    // precondition: 1 <= m <= 12, 1 <= d <= days in m
    // postcondition: date with given attributes has been created
    void increment();
    // postcondition: date has been changed to the next date
    int get_year () const;
    // returned: year of date
    int get_month() const;
    // returned: month of date
    int get_day() const;
    // returned: day of date
private:
    int year;
    int month;
    int day;
};

std::ostream& operator << (std::ostream& out, const date& dt);

#endif

