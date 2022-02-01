#include <iostream>

typedef int (*fcn_t)(double, char); // fcn_t hard to find

int main()
{
    char c { 'a' };

    /* 
        The static_cast operator takes an expression as input, and returns the evaluated value converted 
        to the type specified inside the angled brackets. static_cast is best used to convert one fundamental type into another.
    */
    std::cout << c << ' ' << static_cast<int>(c) << '\n'; // prints a 97

    return 0;
}

/*
*
*/
