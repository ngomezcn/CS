#include <iostream>

int main()
{
    int arr[6][6] = {
    {0,  -4, -6,  0, -7, -6},
    {-1, -2, -6, -8, -3, -1},
    {-8, -4, -2, -8, -8, -6},
    {-3, -1, -2, -5, -7, -4},
    {-3, -5, -3, -6, -6, -6},
    {-3, -6,  0, -8, -6, -7}};

    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            std::cin >> arr[i][j];
        }        
    }
    

    int bigger = -999;
    int counter = 0;
    for (size_t j = 0; j < 4; j++)
    {                    
        for (size_t i = 1; i < 5; i++)
        {
            //std::cout << arr[1][i] << "\n";
            counter = arr[j][i-1]+arr[j][i]+arr[j][i+1]; // Top line
            counter += arr[j+1][i];
            counter += arr[j+2][i-1]+arr[j+2][i]+arr[j+2][i+1]; // Top line

            //std::cout << counter << "\n";

            if(counter > bigger)
            {
                bigger = counter;
            }        
        }

        //std::cout << "==\n";
    }
    std::cout << bigger;
}
