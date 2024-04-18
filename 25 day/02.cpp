#include<iostream>
using namespace std; 

int main ()     {
    int n;
    cout<<"Enter size of array ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements in array: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    //sorting array in decreasing order with selection sort reverse
    for (int i =n-1; i>0; i--) {
        int index=i;
        for(int j=i-1; j>=0; j--){
            if (arr[j] < arr[index]) 
            index=j;
        }
        swap(arr[index], arr[i]);
    }

    

    for (int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}