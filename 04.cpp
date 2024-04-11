#include<iostream>
using namespace std;


//swapping 2 number without using 3rd variable 
// swapping using swap() in-built c++ function
int main()  {
    int a,b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    if (a>= -10000 && a <= 10000 && b>= -10000 && b<=10000) {
        swap(a,b);
        cout<<a<<" "<<b;
    }   
    else 
    cout<<0;
}