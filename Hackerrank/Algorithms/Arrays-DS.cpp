#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

    int N = 0;
    std::cin >> N;
    std::vector<int> A;

    for (size_t i = 0; i < N; i++)
    {
        int aux = 0;
        std::cin >> aux;
        A.push_back(aux);
    }

    for (size_t i = N; i != 0; i--)
    {
        std::cout << A[i-1] << "\n";
    }
    
    return 0;
}
