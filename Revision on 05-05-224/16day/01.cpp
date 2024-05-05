#include<iostream>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;


    int rem, ans=0,multi=1;
    while (n) 
    {
        rem = n%10;
        if (rem==1)
        {
            ans += rem*multi;
        }

        multi*=2;
        n /=10;

    }

    cout<<ans;
}