#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    int shared = 2;
    int cumulative = 0;
    int aux = 0;

    for (int i = 1; i < n; i++)
    {
        aux = (shared * 3)/2;
        shared = aux;
        cumulative += aux;
    }
    std::cout << cumulative + 2 << std::endl;
}
