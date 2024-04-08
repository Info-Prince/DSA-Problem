#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    //?binary to octal conversion

    //binary to decimal 
    int ans=0, rem, multi =1;
    while (n)
    {
        // remainder
        rem = n%10;
        //quotient
        n/=10;
        //answer
        ans = rem * multi +ans;
        //multi
        multi = multi*2;
    }

    //decimal to octal
    int num = ans;
    ans = 0, rem , multi =1;
    while (num)
    {
        //remainder
        rem = num%8;
        //quotient
        num /= 8;
        //answer
        ans = rem * multi +ans;
        //multi 
        multi *= 10;
    }
    cout<<ans;
}