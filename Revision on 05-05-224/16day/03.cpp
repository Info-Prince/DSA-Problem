#include<iostream>
using namespace std;


//decimal to octal number
int main() {
    int n;
    cout<<"Enter a decimal no: ";
    cin>>n;


    int rem , ans = 0, multi=1;
    while (n) {
        //remainder
        rem=n%8;
        //reverse remainder
        ans = rem*multi+ans;
        //update n
        n/=8;
        //multi
        multi*=10;

    }
    cout<<ans;
}