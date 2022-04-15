#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr = {1, 4, 3, 5, 6, 2};

    for (int i = 1; i < arr.size(); i++)
    {
        int val = arr[i];
        int index = i - 1;
        while (index >= 0 && arr[index] > val)
        {
            arr[index + 1] = arr[index];
            index--;
        }
        arr[index + 1] = val;

        for (int j = 0; j < arr.size(); ++j)
            cout << arr[j] << " ";
        cout << endl;
    }
    return 0;
}