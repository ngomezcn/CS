#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int t = 2; 
    std::cin >> t;

    for (size_t j = 0; j < t; j++)
    {
        
        int num = 1240;
        std::cin >> num;
        int counter = 0;
        string s;
        stringstream ss;  
        ss << num;  
        ss >> s;  
        for (size_t i = 0; i < s.length(); i++)
        {
            int digit = s[i]-48;
            //std::cout << s[i]-48 << "\n";
            if(digit != 0)
            {
                if(num%digit == 0)
                {
                    counter++;
                }
            }
        }  
        std::cout << counter << std::endl;
    }  
    
}