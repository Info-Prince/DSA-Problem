#include<iostream>
using namespace std;

int main()  {

    int n;
    cout<<"Enter a decimal no: ";
    cin>>n;

    //converting decimal to binary;
    int ans=0, multi=1, rem;
    while(n) {
        rem = n%2;
        ans = rem*multi+ans;
        n/=2;
        multi*=10;
    }

    cout<<ans;
}