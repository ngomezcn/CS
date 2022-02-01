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
    
    int minus = 100000;
    
    for (size_t i = 0; i < t; i++)
    {
        int n1,n2;
        cin >> n1;
        cin >> n2;
        for (size_t j = n1; j <=n2; j++)
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