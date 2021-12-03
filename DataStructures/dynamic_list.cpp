#include <iostream>

using namespace std;
class Array
{
    private:
        int len = 0;
        int capacity = 0;

    public:
        int *arr = nullptr;

        int size()
        {
            return len;
        }
        bool isEmpty()
        {
            return size() == 0;
        }
        void clear()
        {
            for (size_t i = 0; i < capacity; i++)
            {
                arr[i] = 0;
            }
            len = 0;
        }
        void add(int v)
        {
            if(capacity <= 0)
            {

                capacity++;
                int *new_arr = new int[capacity];

                new_arr = arr;
                new_arr[capacity] = v;

                arr = new int[capacity];
                arr = new_arr;            
            }
            
        }

};

int main()
{
    Array arr;
    arr.add(10);
    cout << arr.size() << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << "1. " << arr.arr[i] << endl;
    }
    
}