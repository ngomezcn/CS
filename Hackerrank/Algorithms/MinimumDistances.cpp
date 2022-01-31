#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 6;
    cin >> n;
    vector<int> a = {7, 1, 3, 4, 1, 7};
    vector<int> remember;
    long long int minDistance = INT64_MAX;
    int last = 0;

    for (int i = 0; i < n; i++)
    {
        int value = 0;
        cin >> value;
        for (int j = 0; j < remember.size(); j++)
        {
            if (value == remember[j])
            {
                // cout << "xd" << a[i] << " " << i-j << endl;

                if (i - j < minDistance)
                {
                    minDistance = i - j;
                }
            }
        }
        remember.push_back(value);
    }

    if (minDistance == INT64_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minDistance << endl;
    }

    return 0;
}
