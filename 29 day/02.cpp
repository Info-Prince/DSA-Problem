//  sorting an array using insertion sort algorithm


#include<iostream>
using namespace std;

int main()  {

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements in array: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    //insertion sort
    for (int i =1; i<n; i++) {
        bool swapped = 0;
        for (int j = i; j>0; j--) {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                swapped = 1;
            }
            else 
            break;
        }
    }

    //printing sorted array element
    cout<<"sorted array element: ";
    for (int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}