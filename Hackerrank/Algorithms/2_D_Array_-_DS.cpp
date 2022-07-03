#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[6][6] = {{1, 1, 1, 0, 0, 0},
                     {0, 1, 0, 0, 0, 0},
                     {1, 1, 1, 0, 0, 0},
                     {0, 0, 2, 4, 4, 0},
                     {0, 0, 0, 2, 0, 0},
                     {0, 0, 1, 2, 4, 0}};

    int biggest = 0;
    for (size_t i = 1; i < 5; i++)
    {    
        for (size_t j = 1; j < 5; j++)
        {
            int sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] 
                                    + arr[i][j] + 
                      arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];

            if(sum > biggest) {
                biggest = sum;
            }
        }
    }

    std::cout << biggest << std::endl;
}
