#include<iostream>
using namespace std;


// swapping function
// a=b, b=c, c=a;  
void Swap (int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;

    return;
}

int main()  {
    int a,b,c;
    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;
    Swap(a,b,c);
    cout<<a<<" "<<b<<" "<<c;
}