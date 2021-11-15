#include <iostream>

using namespace std;

int main()
{
  int n;
  int ana;
  int ticket[2000000] = {3,10,2,9};
  int price;
  int aux;
  int result = 0;

  cin >> n;
  cin >> ana;
  
  for (int i = 0; i < n; i++)
  {
      cin>>ticket[i];
  }

  cin >> price;

  aux = ticket[ana];
  ticket[ana] = 0;

  for(int i = 0; i < n; i++)
  {
    result += ticket[i];
  } 

  if (price == (result/2))
  {
      cout << "Bon Appetit" << endl;
  }
  else if (price != result/2)
  {
      price -= result/2;
      cout << price;
  }
}

