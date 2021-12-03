#include <iostream>

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

    void removeAt(int index)
    {

        len--;
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
    /*Array arr;
    arr.add(10);
    arr.add(11);
    arr.clear();
    arr.add(13);
    arr.add(111);
    arr.set(0,777);

    cout << "size: " << arr.size() << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << "1. " << arr.get(i) << endl;
    }*/

    int* arr = new int[] {1, 2, 3, 4, 5};
    int* new_arr = new int[2];


}