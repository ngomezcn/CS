#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 6;
    cin >> n;
    vector<int> a = {7, 1, 3, 4, 1, 7};
    vector<int> remember;
    int minDistance = n + 1;
    int last = 0;

    for (int i = 0; i < n; i++)
    {
        int value = 0;
        cin >> value;
        for (int j = 0; j < remember.size(); j++)
        {
            if (value == remember[j])
            {
                if (i - j < minDistance)
                {
                    minDistance = i - j;
                }
            }
        }
        remember.push_back(value);
    }

    if (minDistance == n + 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minDistance << endl;
    }

    return 0;
}
