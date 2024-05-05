#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    for(int i = 1; i<=n; i++) {
        
        //print space
        int space = n-i; 
        while (space) {
            cout<<"  ";
            space--;
        }

        //printing first num triangle
        for(int j =1; j<=2*i-1; j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}