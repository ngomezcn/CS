#include <iostream>

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
    int get()
    {

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
            new_arr[capacity-1] = v;

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
    
};

int main()
{
    Array arr;
    arr.add(10);
    arr.add(11);
    arr.clear();
    arr.add(13);
    arr.add(111);

    cout << "size: " << arr.size() << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << "1. " << arr.arr[i] << endl;
    }

}