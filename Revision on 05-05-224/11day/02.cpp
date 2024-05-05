#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    for (int i = 1; i<=n; i++) {

        //printing space
        int space = n-i;
        while (space) {
            cout<<" ";
            space--;
        }

        for (int j=1; j<=i; j++) 
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}