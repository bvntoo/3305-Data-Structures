#include <iostream>
#include <cstdlib>
#include <cassert>
#include "date.h"

date::date(int d, int m, int y)
{
    assert((d>=1)&&((d<=31)&&((m>=1)&&(m<=12))));
        day=d;
        month=m;
        year=y;
}

void date::increment()
{
    int n =get_month();

    switch(n)
    {
        case 2: if((year%4==0)&&(year%100!=0)||((year%100==0)&&(year%400==0))||(year%400==0))
            {
                if(day==29)
                {
                    day=1;
                    month++;
                }
                day++;
            }
            else if(day==28)
            {
                day=1;
                month++;
            } else
            {
                day++;
            }
            break;
        case 4:if(day==30)
            {
                day=1;
                month++;
            }
            day++;
            break;
        case 6:if(day==30)
            {
                day=1;
                month++;
            }
            day++;
            break;
        case 9:if(day==30)
            {
                day=1;
                month++;
            }
            day++;
            break;
        case 11:if(day==30)
            {
                day=1;
                month++;
            }
            day++;
            break;
        default: if(day==31 && month==12)
            {
            day=1;
            month=1;
            year++;
            }
            else if(day==31)
            {
                day=1;
                month++;
            }
            else
                {
                day++;
                }
            break;
    }


}
int date::get_year() const
{
    return year;

}
int date::get_month() const
{
    return month;
}

int date::get_day() const
{
    return day;
}
std::ostream& operator<< (std::ostream& out, const date& dt)
{
    out<<"The date is "<<dt.get_month()<<"/"<< dt.get_day()<<"/"<< dt.get_day()<<std::endl;
    return out;
}