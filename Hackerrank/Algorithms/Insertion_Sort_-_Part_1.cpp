#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};

    int lowest = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i >= 1; i--)
    {
        if (arr[i - 1] > lowest)
        {
            arr[i] = arr[i - 1];
        }
        else if (arr[i - 1] < lowest)
        {
            arr[i] = lowest;
            for (int j = 0; j < arr.size(); ++j)
                cout << arr[j] << " ";
            cout << endl;
            break;
        }

        for (int j = 0; j < arr.size(); ++j)
            cout << arr[j] << " ";
        cout << endl;

        if (i == 1)
        {
            arr[0] = lowest;
            for (int j = 0; j < arr.size(); ++j)
                cout << arr[j] << " ";
            cout << endl;
        }
    }
}