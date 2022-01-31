
#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    /* code */


    std::vector<int> myList = {1,2,3,4,5} ;
        int sum = std::accumulate(std::begin(myList), std::end(myList), 0);

    std::cout << sum << std::endl;

    return 0;
}
