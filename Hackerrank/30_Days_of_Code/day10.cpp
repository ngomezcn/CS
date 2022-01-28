#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 13;
    cin >> n;
    int remainder = 0;

    int one_counter = 0;
    int max_consecutive = 0;
    while (n > 0)
    {
        remainder = n%2;
        n = n/2;


        if(remainder)
        {
            one_counter++;
            if(one_counter > max_consecutive)
            {
               max_consecutive = one_counter;
            }
        }
        else{
               one_counter = 0;
        }
        
    }
    
    cout << max_consecutive << endl;
    return 0;
}
