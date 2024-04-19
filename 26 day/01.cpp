// sorting an array using bubble sort algorithm

#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements in array: ";
    for (int i =0 ; i<n; i++)
    cin>>arr[i];

    for (int i=n-2 ; i>=0; i--) {
        bool swapped = 0;
        for (int j =0; j<=i; j++) {
            if (arr[j] > arr[j+1])
            {
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        // if (swapped ==0)
        // break;
    }


    // printing sorted element
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}