#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    string s;
    char abc[26] = {0};
    while (cin >> s)
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                abc[s[i] - 'a'] = '#';
            }
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                abc[(s[i]+32) - 'a'] = '#';
            }
        }
    }

    for (size_t i = 0; i < 26; i++)
    {
        if(abc[i] != '#')
        {
            cout << "not pangram" << endl;

            return 0;
        }
    }
    cout << "pangram" << endl;
    return 0;
}
