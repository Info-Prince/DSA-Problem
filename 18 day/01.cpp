#include<iostream>
using namespace std;
#include<math.h>
#include<limits.h>

//cube function
int cube (int n) {
    int ans = n*n*n;
    if ( ans > INT_MAX / n*n*n)
    return 0;
    return ans;
}

int main ()     {
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<cube(n);
}