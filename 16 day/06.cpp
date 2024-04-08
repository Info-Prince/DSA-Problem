#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter octal Number: ";
    cin>>n;

    //? Octal to binary conversion

    //octal to decimal conversion
    int ans =0, rem , multi=1;
    while (n)
    {
        //remainder
        rem = n % 10;
        //quotient
        n /= 10;
        //answer
        ans = rem * multi + ans;
        //multi
        multi *= 8;
    }
    // cout<<ans<<endl;

    
    //decimal to binary
    n = ans;
    multi =1, rem, ans = 0;
    while (n)
    {
        //remainder
        rem = n%2;
        //quotient
        n /= 2;
        //answer
        ans = rem * multi + ans;
        //multi
        multi *= 10;
    }

    cout<<ans;
}