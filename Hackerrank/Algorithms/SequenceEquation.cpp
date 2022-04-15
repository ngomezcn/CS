#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> p = {4, 3, 5, 1, 2};
    int c = 0;

    while (p.size()+1 != c)
    {
        for (size_t i = 0; i < p.size(); i++)
        {
            if(c == p[i]) {
                int target = i+1;
                for (size_t j = 0; j < p.size(); j++) 
                {
                    if(target == p[j])
                    {
                        cout << j+1 << endl;
                        break;
                    }
                }
            }
        }
        c++;
    }
}