#include<iostream>
using namespace std;


//program to converting binary to octal number
int main ()     {

    int n;
    cout<<"Enter binary number: ";
    cin>>n;

    //binary to decimal
    int ans = 0, rem, multi=1;
    while (n) {
        rem = n%10;
        n/=10;
        if (rem == 1) {
            ans = rem * multi + ans;
        }
        multi*=2;
    }
    // cout<<ans;
    
    
    //decimal to octal conversation
    n=ans, ans = 0, multi = 1;
    while (n) {
        rem = n%8;
        n/=8;
        ans = rem*multi+ans;
        multi*=10;
    }
    cout<<ans;
    
}