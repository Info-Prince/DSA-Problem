#include<iostream>
using namespace std;

int main()  {
    
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    //printing top half star pattern;
    for (int i = 1; i<=n; i++) {

        //printing space
        int space = n-i; 
        while (space){
            cout<<" ";
            space--;
        }

        //printing star
        for (int j =1; j<=i*2-j; j++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    // cout<<endl;


    //printing bottom last pattern
    for(int i = 1; i<=n; i++) {
        
        //printing space;
        int space = i-1;
        while(space) {
            cout<<" ";
            space--;
        }
        //printing star
        int star = n-i+1;
        while(star){
            cout<<"* ";
            star--;
        }

        cout<<endl;
    }
    // cout<<endl;

}