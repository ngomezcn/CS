#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        bool check[11]= { 0 };
        check[0] = true;
        int rControl = 0;
        for (size_t j = 0; j < s.length(); j++)
        {
            if(s[j] == 'h' && check[0]){  check[1] = true; check[0] = false;}           
            if(s[j] == 'a' && check[1]){  check[2] = true; check[1] = false;}         
            if(s[j] == 'c' && check[2]){  check[3] = true; check[2] = false;}             
            if(s[j] == 'k' && check[3]){  check[4] = true; check[3] = false;}             
            if(s[j] == 'e' && check[4]){  check[5] = true; check[4] = false;}             
            if(s[j] == 'r' && check[5]){  check[6] = true; check[5] = false; rControl = j;}             
            if(s[j] == 'r' && check[6] && j != rControl){  check[7] = true; check[6] = false;}             
            if(s[j] == 'a' && check[7]){  check[8] = true; check[7] = false;}             
            if(s[j] == 'n' && check[8]){  check[9] = true; check[8] = false;}             
            if(s[j] == 'k' && check[9]){  check[10] = true;}       
        }
        if(check[10])   
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}