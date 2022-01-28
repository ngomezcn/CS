#include <iostream>
#include <vector>

using namespace std;

int main()
{
    static int size = 6;
    int sumatori = 0;
    int max_sum = -64;
    int matrix[size][size];

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (size_t i = 1; i < size-1; i++)
    {
        for (size_t j = 1; j < size-1; j++)
        {
            sumatori = 
            + matrix[i-1][j-1] 
            + matrix[i-1][j]
            + matrix[i-1][j+1] 
            + matrix[i][j]
            + matrix[i+1][j-1] 
            + matrix[i+1][j] 
            + matrix[i+1][j+1];

            


            if(sumatori > max_sum)
            {
                max_sum = sumatori;
            }           
        }
    }
            cout << max_sum << endl;   

    return 0;
}
