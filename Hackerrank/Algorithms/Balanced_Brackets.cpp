#include <iostream>

using namespace std;
int main()
{

    int n;
    cin >> n;
    bool check = true;

    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int index = s.size() - 1;

        for (size_t j = 0; j < s.size(); j++)
        {

            if ((s[j] == '{' && s[index] != '}') ||
                (s[j] == '[' && s[index] != ']') ||
                (s[j] == '(' && s[index] != ')'))
            {
                cout << s[j] << "" << s[index] << endl;
                check = false;
                break;
            }

            index--;
        }

        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        check = true;
    }

    return 0;
}
