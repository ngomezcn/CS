#include <iostream>
#include <vector>
#include<bits/stdc++.h> 

using namespace std;

int main()
{
    string s = "bcxz";


    string sr = s;
    reverse(sr.begin(), sr.end());
    for (size_t i = 1; i < s.length(); i++)
    {
        if(abs(static_cast<int>(sr[i])-static_cast<int>(sr[i-1])) != abs(static_cast<int>(s[i])-static_cast<int>(s[i-1]))){
            //return "Not Funny";
        }

    }
    //return "Funny";
    
}