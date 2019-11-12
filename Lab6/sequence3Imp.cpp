#include "sequence3.h"
#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;
using namespace main_savitch_5;


sequence::sequence()
{
    head_ptr=NULL;
    tail_ptr=NULL;
    cursor=NULL;
    precursor=NULL;
    many_nodes=0;
}
sequence::sequence(const main_savitch_5::sequence &source)
{
    list_copy(source.head_ptr,head_ptr,tail_ptr);
    many_nodes=source.many_nodes;

    int position=1;
    for(node* ptr=source.head_ptr;ptr!=source.cursor;ptr=ptr->link())
    {
        position++;
    }
    cursor=list_locate(head_ptr,position);
    if(position==1)
    {
        precursor=NULL;

    }
    else
    {
        precursor=list_locate(head_ptr,position-1);
    }

}
sequence::~sequence()
{
    list_clear(head_ptr);
    many_nodes=0;
}
void sequence::start()
{
        cursor=head_ptr;
        precursor=NULL;
}
void sequence::advance()
{
    if(is_item())
    {
        precursor=cursor;
        cursor=cursor->link();
    }
}

void sequence::insert(const main_savitch_5::sequence::value_type &entry)
{
    if (is_item()) //sequence is not empty
    {
        if (precursor != NULL)
        {//cursor is somewhere in the middle
            list_insert(precursor, entry);
            cursor = precursor->link();
        }
        else
        {//cursor is at the head
            list_head_insert(head_ptr, entry);
            precursor = NULL;
            cursor = head_ptr;
        }
    }
    else
    {//cursor does not have an item
        if (many_nodes == 0)
        {//list is empty
            list_head_insert(head_ptr, entry);
            precursor = NULL;
            cursor = head_ptr;
            tail_ptr = head_ptr;
        }
        else
        {//cursor has run off the list
            list_head_insert(head_ptr, entry);
            precursor = NULL;
            cursor = head_ptr;
        }
    }

    many_nodes++;
}
void sequence::attach(const main_savitch_5::sequence::value_type &entry)
{
    if (is_item())
    {
        if (cursor->link() == NULL)
        {//cursor is at the tail
            list_insert(cursor, entry);
            precursor = cursor;
            cursor = cursor->link();
            tail_ptr = cursor;
        }
        else
        {//cursor is somewhere in the middle
            list_insert(cursor, entry);
            precursor = cursor;
            cursor = cursor->link();
        }
    }
    else
    {
        if (many_nodes == 0)
        {//empty list
            list_head_insert(head_ptr, entry);
            precursor = NULL;
            cursor = head_ptr;
            tail_ptr = head_ptr;
        }
        else
        {//cursor has run off the list
            precursor = tail_ptr;
            list_insert(tail_ptr, entry);
            tail_ptr = tail_ptr->link();
            cursor = tail_ptr;
        }
    }
    many_nodes++;
}
void sequence::remove_current()
{
    if (is_item())
    {
        many_nodes--;
        if (precursor == NULL)
        {
            list_head_remove(head_ptr);
            cursor = head_ptr;
        }
        else
        {
            cursor = cursor->link();
            list_remove(precursor);
        }
    }
}
void sequence::operator=(const main_savitch_5::sequence &source)
{
    if(this==&source)
    {
        return;
    }
    list_clear(head_ptr);
    list_copy(source.head_ptr,head_ptr,tail_ptr);
    many_nodes=source.many_nodes;

    int position=1;
    for(node* ptr=source.head_ptr;ptr!=source.cursor;ptr=ptr->link())
    {
        position++;
    }
    cursor=list_locate(head_ptr,position);
    if(position==1)
    {
        precursor=NULL;

    }
    else
    {
        precursor=list_locate(head_ptr,position-1);
    }
}
sequence::value_type sequence::current() const
{
    assert(is_item());
    return cursor->data();
}


