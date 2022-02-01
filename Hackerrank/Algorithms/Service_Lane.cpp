#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n,t;
    cin >> n;
    cin >> t;

    vector<int> width;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        width.push_back(value);
    }
    int cases[1000][2];
    for (size_t i = 0; i < t; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cin >> cases[i][j];
        }
    }

    int minus = 100000;
    for (size_t i = 0; i < t; i++)
    {
        for (size_t j = cases[i][0]; j <= cases[i][1]; j++)
        {
            if(width[j] < minus)
            {
                minus = width[j];
            }

        }
        cout << minus << endl;

        minus = 100000;
    }
    
}