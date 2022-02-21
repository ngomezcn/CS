#include <iostream>
#include <string>

using namespace std;

string naturalNumbers(int n)
{
    if(n == 0)
    {
        return "";
    }

    return naturalNumbers(n-1) + " " + std::to_string(n);
}

int main()
{
    cout << "The natural numbers are: ";
    cout << naturalNumbers(50);
}