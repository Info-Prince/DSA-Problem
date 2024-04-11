#include<iostream>
using namespace std;


//reverse of a number
// constraints -5000 =< n <= 5000
int reverse (int n) {
    int num =n;
    int ans =0, rem;
    while (num)
    {
        rem = num%10;
        num /=10;
        ans = ans * 10 +rem;
    }
    if (n>=-5000 && n<=5000)
    return ans;
    else 
    return 0;
    
}

int main( )     {
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    cout<<reverse(n);   
}