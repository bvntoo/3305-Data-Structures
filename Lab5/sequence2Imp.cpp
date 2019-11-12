#include "sequence.h"
#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;
using namespace main_savitch_4;


sequence::sequence(main_savitch_4::sequence::size_type initial_capacity)
{
    data= new sequence::value_type[initial_capacity];
    used=0;
    current_index=0;
    capacity=initial_capacity;
}
sequence::sequence(const main_savitch_4::sequence &source)
{
    data = new sequence::value_type[source.capacity];
    capacity=source.capacity;
    used=source.used;
    current_index=source.current_index;

    for(int a=0;a<source.used;a++)
    {
        data[a]=source.data[a];
    }
}
sequence::~sequence()
{
    delete [] data;
    used=0;
    current_index=0;
}
void sequence::resize(main_savitch_4::sequence::size_type new_capacity)
{
    if(size()<=new_capacity)
    {
        capacity=new_capacity;
        value_type *array= new value_type[capacity];
        for(int a=0;a<size();a++)
        {
            array[a]=data[a];
        }
        delete data;
        data=array;
    }
}
void sequence::start()
{
    if(!size()==0)
        current_index=0;

}
void sequence::advance()
{
    if(is_item());
    //if(current_index==used)
        //used++;
    current_index++;
}
void sequence::insert(const main_savitch_4::sequence::value_type &entry)
{
    if(used==0)
    {
        data[0]=entry;
        used++;
        current_index=0;
    }
    else if(used==capacity)
    {
        resize(used+1);
        for(int a=used;a>current_index;a--)
        {
            data[a]=data[a-1];
        }
        data[current_index]=entry;
        ++used;
    }
    else
    {
        if(!is_item())
            current_index=0;

        for(int a=used+1;a>current_index;a--)
        {
            data[a]=data[a-1];
        }
        data[current_index]=entry;
        used++;
    }
}
void sequence::attach(const main_savitch_4::sequence::value_type &entry)
{
    if(used==capacity)
    {
        resize(used+1);
    }
    if(!is_item())
    {
        data[used]=entry;
        current_index=used;
        used++;
    }
    else
    {
        data[used]=entry;
        for(int a=used;a>current_index+1;a--)
        {
            data[a]=data[a-1];
        }
        data[current_index+1]=entry;
        used++;
        advance();
    }
}
void sequence::remove_current()
{
    assert(is_item());

    data[current_index]={};
    used--;
    for(int a=current_index;a<used;a++)
    {
        data[a]=data[a+1];
    }
}
void sequence::operator=(const main_savitch_4::sequence &source)
{
    if(this==&source)
        return;
    data = new value_type[source.capacity];
    capacity=source.capacity;
    used=source.used;
    current_index=source.current_index;
    copy(source.data, source.data + used,data);
}
sequence::size_type sequence::size() const
{
    return used;
}
bool sequence::is_item() const
{
    if(used==0)
        return false;
    if(current_index>=used)
        return false;
    return true;

}
sequence::value_type sequence::current() const
{
    assert(is_item());
    return  data[current_index];
}

