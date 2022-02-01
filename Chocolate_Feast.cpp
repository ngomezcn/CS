#include <iostream>

using namespace std;
int money;
int cost;
int neededWrapers;
int wrapers = 0;
int result = 0;

int chocolateFeast()
{
    int barWithMoney = static_cast<int>(money / cost);
    wrapers = barWithMoney;
    result = barWithMoney;

    //cout << "result: " << result << endl;
   // cout << "wrapers: " << << endl;

    while (wrapers >= neededWrapers)
    {
        //cout << "wrapers: " << wrapers<< endl;

        result++;
        wrapers++;
        wrapers -= neededWrapers;
    }
    cout << result << endl;

    return 0;
}

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> money;
        cin >> cost;
        cin >> neededWrapers;
        chocolateFeast();
    }
}
