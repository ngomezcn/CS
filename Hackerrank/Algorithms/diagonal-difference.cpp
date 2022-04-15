#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr = {{11, 2, 4}, 
                                {4, 5, 6},
                                {10, 8, -12}};

    int a = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        a += arr[i][i];
    }

    int b = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
         b += arr[i][(arr.size()-1)-i];
    }

    return abs(a-b);
}