#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int d = 2;
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result;

    for (size_t i = 0; i < arr.size(); i++)
    {
        int pos = (i+d)%arr.size();       

       result.push_back(arr[pos]);
    }
   

    cout << "result:";
    for (auto n : result)
    {
        std::cout << n << ',';
    }
}
