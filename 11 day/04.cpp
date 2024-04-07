#include<iostream>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i<=n; i++) {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        for (int j = 1; j<=i; j++) {
            cout<<"* ";
        }

        cout<<endl;
        
    }

    for(int i = 1; i<=n; i++) {
        //printing space
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }

        //printing stars
        // int col = n - i + 1;
        // while (col)
        // {
        //     cout<<"* ";
        //     col--;
        // }
        for (int j = n-i+1; j >= 1; j--)
        {
            cout<<"* ";
        }

        cout<<endl;   
    }
}
