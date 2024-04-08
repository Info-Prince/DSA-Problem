#include<iostream>
#include<math.h>
using namespace std;

int main ()     {
    // cout<<pow(10, 0);
    int n; 
    cout<<"Enter a decimal Number: "; 
    cin>>n;
    

    int ans =0, rem,multi =1, i=0;
    while (n>0)
    {
        //remainder
        rem = n%2;
        //ans
        ans = rem * multi + ans;
        //quotient
        n /= 2; 
        //multiplier or pow(10, i);
        multi*=10;
    }

    cout<<ans;
    
}