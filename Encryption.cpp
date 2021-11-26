#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* 
        L: length of the text

        Constraints:
           1. Remove spaces
           2. Characters are into a grid
    */

    float L = 0;
    std::string s;// = "feedthedog";
    std::cin >> s;

    int text[9][9];

    char a = ' ';
    char b = NULL;
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i] == a)
        {
            s[i] = '\0';
        }
    }


    L = sqrt(s.length());

    int x,y;

    y = std::floor(L);
    x = std::ceil(L);

    //std::cout << "text: " << s << std::endl;
    //std::cout << "y:" << y << std::endl;
    //std::cout << "x:" << x << std::endl;


    std::string arr;
    int index = 0;

    for (size_t i = 0; i < x; i++)
    {
        index = i;

        while (index < s.length())
        {
            std::cout << s[index];

            
            index += x;           

        }
        std::cout << " ";        
    }
       
    return 0;
}


