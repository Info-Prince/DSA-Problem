#include<iostream>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements in array: ";
    int arr [1000];
    for (int i =0; i<n; i++)
    cin>>arr[i];


    // selection sort algorithm
    for (int i =0; i<n-1; i++) {
        int index = i;
        for (int j = i+1; j<n; j++) {
            if (arr[j] < arr[index]) 
            index = j;
        }
        swap (arr[index], arr[i]);
    }

    //print sorted array
    for (int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}