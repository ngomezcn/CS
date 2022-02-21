#include <iostream>
#include <vector>

using namespace std;

void printArray(int arr[], int start ,int size) {

    if(start == size)
        return;

    cout << arr[start] << endl;

    return printArray(arr, start+1, size);
}

int main()
{

    int arr[6] = {2,3,4,5,6,5};

    printArray(arr, 0, 6);

    return 0;
}