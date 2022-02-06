#include <iostream>
#include <vector>
#include <stdio.h> /* printf */
#include <math.h>  /* fmod */

using namespace std;

int main()
{
    int len;
    cin >> len;
    int moves;
    cin >> moves;
    vector<int> arr;
    for (size_t i = 0; i < len; i++)
    {
        int val = 0;
        cin >> val;
        arr.push_back(val);
    }

    double result = float(moves) / len;

    int index = 0;

    if (moves > len)
    {
        index = len - (moves - (static_cast<int>(result) * len));
        if (len % 2)
        {
            index++;
        }
    }
    else
    {
        index = len - moves - 1;
        
        if (len % 2 == 0)
        {
            index--;
        }
        if(index == 0)
        {
            index = index + len-1  ;
        }
        cout << "index" << index << endl;

    }

    for (size_t i = 0; i < len; i++)
    {

        if ((index + i) < len)
        {
            cout << arr[index + i] << " ";
        }
        else
        {
            cout << arr[index + i - len] << " ";
        }


    }
}