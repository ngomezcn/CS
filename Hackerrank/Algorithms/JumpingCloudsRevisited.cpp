#include <vector>
#include <iostream>

using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> clouds(n);

    for (int cloudPos = 0; cloudPos < n; cloudPos++)
    {
        cin >> clouds[cloudPos];
    }

    int energy = 100;
    int curCloud = 0;
    while (true)
    {
        curCloud += k;
        curCloud %= n;
        if (clouds[curCloud])
            energy -= 2;
        energy--;
        if (curCloud == 0)
            break;
    }
    cout << energy << endl;
    return 0;
}