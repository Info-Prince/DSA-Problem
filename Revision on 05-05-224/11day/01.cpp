#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    for(int i =1; i<=n; i++) {

        //print space
        int space = n-i;
        while (space) 
        {
            cout<<"  ";
            space--;
        }

        //print char
        for (int j = 1; j<=i; j++) {
            char name = 'A' + j-1;
            cout<<name<<" ";
        }

        //printing last triangle char
        char name = 'A' + i-2;
        for (int j = 1; j<=i-1; j++)
        {
            cout<<name<<" ";
            name--;
        }

        cout<<endl;
    }
}