#include <iostream>
#include <vector>

using namespace std;

struct example{
    string s;
};

int main()
{
    example *a = new example();
    delete a;
    for (size_t i = 0; i < INTMAX_MAX; i++)
    {
        cout << i << " " << ((double)i/(double)INTMAX_MAX)*100 << "% " << endl;
    }
    
    cout << a->s << endl;
}