#include <iostream>

int pow(int x, int power)
{


    if (power == 1)
      return x;
      
    power--;
    return x * pow(x, power);
}

using namespace std;

int main()
{
    cout << pow(5,5);
    return 0;
}
