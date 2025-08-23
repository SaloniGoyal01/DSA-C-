#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    // // Reverse of an array
    // int arr[5] = {1,2,3,4,5};
    // int start=0, end=4;
    // while(start<end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // };
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }


    // // Second Largest Element
    // int arr[5] = {10,23,31,14,25};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr, arr+n);
    // cout<<arr[n-2];


    // // Second Smallest Element
    // int arr[5] = {25,10,20,30,15};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr, arr+n);
    // cout<<arr[1];


    // Fibonacci Series
    int n;
    cout<<"Enter an Element: ";
    cin>>n;
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n-1; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];





    return 0;
}