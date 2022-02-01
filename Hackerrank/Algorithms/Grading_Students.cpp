#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int value = 0;
        cin >> value;


        if(value < 38)
        {
            cout << value << endl;
        }
        else if((value%10) >= 3 && (value%10) <= 5)
        {
            cout << value+(5-(value%10)) << endl;
            
        }
        else if((value%10) >= 8)
        {
            cout << value+(10-value%10) << endl;
        }
        else{
             cout << value << endl;
        }
        
    }
    
}
