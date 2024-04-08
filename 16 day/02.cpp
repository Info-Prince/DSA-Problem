#include<iostream>
#include<math.h>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    int ans=0, rem, multi=1;
    while (n)
    {
        //remainder
        rem = n%10;
        //answer
        ans = rem * multi + ans;
        //quotient
        n /= 10;
        //multi or pow(10,i)
        multi = multi*2;
    }
    cout<<ans;
    
}