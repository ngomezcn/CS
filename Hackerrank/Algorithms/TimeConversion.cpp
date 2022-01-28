#include <iostream>
using namespace std;

int main()
{

    char x[10];

    int y = 0,a = 2;

    cin.getline(x,10);

    for (int i = 0; i < 2; i++) {
        y *= 10;
        y += x[i]-48;
        
    }  

    y += 12;

    if (x[8]=='P' && y==24){

       a = 0;


    } else if (x[8]=='A' && y!=24) {

       
       a = 0;

    } else if (y==24){


        cout << "00";

    } else {

        cout << y;
    }

    
    

    for (int i = a; i < 8; i++){

        cout << x[i];

    }     




    return 0;

}
