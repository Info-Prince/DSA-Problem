#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter an octal number: ";
    cin>>n;

    //converting octal to decimal 
    int rem, ans=0 , multi =1;
    while (n) {
        rem = n%10;
        ans = rem*multi+ans;
        n/=10;
        multi*=8;
    }

    cout<<ans;
}