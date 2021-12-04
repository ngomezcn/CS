#include <iostream>
#include <algorithm>    // std::copy

/*
    This is for learning purposes only, it is not optimized/prepared for actual use.
*/

using namespace std;
class Array
{
private:
    int len = 0;
    int capacity = 0;

public:
    int* arr = nullptr;

    int size()
    {
        return len;
    }
    bool isEmpty()
    {
        return size() == 0;
    }
    int get(int index)
    {
        return arr[index];
    }
    void set(int index, int element)
    {
        arr[index] = element;
    }
    void clear()
    {
        arr = nullptr;
        len = 0;
        capacity = 0;
    }
    void add(int v)
    {
        if (capacity <= 0)
        {
            capacity++;

            int* new_arr = new int[capacity];
            new_arr[capacity - 1] = v;

            arr = new int[capacity];
            arr = new_arr;

            len++;
        }
        else
        {
            capacity++;
            int* new_arr = new int[capacity];

            new_arr = arr;
            new_arr[capacity - 1] = v;

            arr = new int[capacity];
            arr = new_arr;

            len++;
        }
    }

    void removeAt(int index)
    {
        int begin = index;
        int end = len-index-1;

        int* begin_arr = new int[begin];
        int* end_arr = new int[end];

        begin_arr = arr;
        end_arr = arr+index+1;

        arr = new int[capacity - 1];
        
        // TODO: Find a way to avoid use std::copy. Just for learning purposes :)

        std::copy(begin_arr, begin_arr + begin, arr);
        std::copy(end_arr, end_arr + end, arr + begin);

        capacity--;
        len--;
    }

    int indexOf(int element)
    {
        for (size_t i = 0; i < len; i++)
        {
            if (arr[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    bool contains(int element)
    {
        for (size_t i = 0; i < len; i++)
        {
            if (arr[i] == element)
            {
                return true;
            }
        }
        return false;
    }
};

