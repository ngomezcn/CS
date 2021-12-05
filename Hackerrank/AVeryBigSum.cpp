#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int long num,sum=0;
    cin>>num;
    
    vector<int> arr(num);

    for (int i = 0; i<num; i++){

        cin>>arr[i];

    }

    for (int i = 0; i<num; i++){

        //cout<<arr[i]<< " ";
        sum = sum + arr[i];

    }
    cout << sum;

    return 0;
}
