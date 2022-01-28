#include <iostream>

int main()
{
    int n = 5;
    std::cin >> n;
    int arr[100] = {3,3,2,1,3};

    int max_repe = 0;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    

    for (size_t i = 0; i < n; i++)
    {
        int counter = 0;
        for (size_t j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
            }
        }

        if(counter > max_repe)
        {
            max_repe = counter;
            //std::cout << max_repe << "\n";
        }        
    }

    std::cout << n-max_repe;
    
}