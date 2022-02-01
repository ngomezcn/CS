#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    

    string s = "singleword";
    cin >> s;
    int counter = 1;

    for (size_t i = 0; i < s.size(); i++)
    {
        switch ((int)s[i])
        {
        case 65 ... 90:
            counter++;
            break;
        
        }
    }
    
    cout << counter << endl;

    return 0;
}
