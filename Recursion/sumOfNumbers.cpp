#include <iostream>
#include <vector>

using namespace std;

int sumOfNumbers(int n) {

    if(n == 0)
    {
        return 0;
    }
    return n + sumOfNumbers(n-1);
}

int main() {
    cout << sumOfNumbers(5) << endl;
}