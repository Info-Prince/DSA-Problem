#include<iostream>
using namespace std;

int main ()     {
    int temp;
    cout<<"Enter temperature in degree: ";
    cin>>temp;

    if (temp >= 70 && temp <= 90 )
    {
        cout<<"Water Temperature is " <<temp<< ", You're suitable for swimming";
    } else {
        cout<<"Water Temperature is " <<temp<<", Not suitable for swimming";
    }
    

    return 0;
}