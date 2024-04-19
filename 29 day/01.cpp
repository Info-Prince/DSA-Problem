// sorting an array using insertion sort

#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter size of array: "; 
    cin>>n;
    
    int arr[300];
    cout<<"Enter elements in array: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    // sorting array using insertion sort
    for (int i = 1; i<n; i++) {
        for (int j = i; j>0; j--) {
            if (arr[j] > arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
        }

    }

    //print sorted array
    for (int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}