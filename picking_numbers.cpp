#include <iostream>

class subArray
{
    public:
        int index  = 0;
        int size   = 0;
        int number = 0;

};

void createSubArrays()
{
    
}

int main()
{
    int n = 9;
    int a[] = {1,1,2,2,4,4,5,5,5};

    subArray sub1;
    subArray sub2;
    subArray aux;

    int num = 0;
    int index = 0;

    
    for (size_t i = 0; i < n; i++)
    {
        // Building the auxiliar array used to fill the subarrays
        num = a[i];
        while(a[index] == num)
        {

            if(a[index] == num)
            {

            }

            index++;
            aux.size++;
            aux.number = a[index];
            aux.index = 1;
        }


    }            
}