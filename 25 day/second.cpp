// sort an array of integers in increasing order by taking the highest number to the right place.

#include<iostream>
using namespace std;

int main ()     {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[200];
    cout<<"Enter elements in array: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];


    //sorting algo 
    for (int i = n-1; i>0; i--) {
        int index =i;
        for(int j = i-1; j>=0; j--) {
            if (arr[j] > arr[index])
            index = j;
        }
        swap(arr[index], arr[i]);
    }


    //printing sorted array
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}