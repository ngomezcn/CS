#include <iostream>
#include <vector>

int main()
{

    int size = 7;
    int clouds[100];
    int jumps = 0;

    std::cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> clouds[i];
    }
    

    for (int i = 0; i < size; i++)
    {
        if(i+1 >= size)
        {
            break;
        }
       
              
        if(clouds[i+2] == 0)
        {
            jumps += 1;
            i = i + 1;

        }        
        else if (clouds[i+1] == 0)
        {
            jumps += 1;
        }

    }    

    std::cout << jumps;
}   