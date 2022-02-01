#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string matrix[4];

    for (size_t i = 0; i < n; i++)
    {
        cin>>matrix[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << matrix[i] << endl;
    }
}
