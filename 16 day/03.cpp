#include<iostream>
#include<math.h>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter a Decimal number: ";
    cin>>n;

    //converting decimal to Octal
    int ans =0, rem, multi=1;
    while (n)
    {
        //remainder
        rem = n%8;
        //answer
        ans = rem * multi + ans;
        //quotient;
        n/=8;
        //multi 
        multi*=10;
    }

    cout<<ans;
    
}
