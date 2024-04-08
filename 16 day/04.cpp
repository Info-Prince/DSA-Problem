#include<iostream>
#include<math.h>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter Octal Number: ";
    cin>>n;

    //converting octal to decimal
    int ans =0, rem, multi = 1;
    while (n)
    {
        //remainder
        rem = n%10;
        //answer
        ans = rem * multi + ans;
        //quotient
        n/=10;
        //multi
        multi *= 8;
    }
    cout<<ans;
    
}