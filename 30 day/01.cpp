// finding element using binary search in sorted array


#include<iostream>
using namespace std;


int binarySearch (int arr[], int n, int target) {

    int start =0; 
    int end = n-1;
    int mid;
    while (start<=end)
    {
        /* code */
        mid = (start + end)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target) 
        start = mid + 1;
        else 
        end = mid -1;
    }
    return -1;
}

int main ()     {
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter array element: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter target element: ";
    cin>>target;

    cout<<binarySearch(arr, n, target)<<endl;

    return 0;
    
}