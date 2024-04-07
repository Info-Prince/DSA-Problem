#include<iostream>
using namespace std;

int main ()     {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if (num >= 0)
    {
        //check even 
        if (num % 2 == 0)
        {
            cout<<"Number is even positive";
        } else {
            cout<<"Number is odd positive";
        }
        
    } else {
        cout<<"Number is negative";
    }

    return 0;
}