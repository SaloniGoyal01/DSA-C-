#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[3] = {1,2,3};
    // cout<<arr[1];


    // int arr[] = {1,2,3,4,5};
    // cout<<arr[0];


    //  int arr[5] = {1,2,3,4,5};
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }


    // // Take 5 integers in an array and print the sum of all elements
    // int arr[5];
    // int sum = 0;
    // cout<<"Enter 5 numbers: ";
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5; i++){
    //     sum+=arr[i];
    //     }
    // cout<<"Sum = "<<sum<<endl;


    // //  takes an integer n from the user, then reads n integers into an array and prints them in the same order
    // int n;
    // cout<<"Enter Elements: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // // print the total memory size (in bytes) occupied by the array
    // int arr[5] = {1,2,3,4,5};
    // cout<<sizeof(arr);


    // // print the size of the array
    // int arr[5] = {1,2,3,4,5};
    // cout<<sizeof(arr)/sizeof(arr[0]);


    // // declare a single integer variable, and print the memory size (in bytes) of that integer variable
    // int arr[5] = {1,2,3,4,5};
    // int a;
    // cout<<sizeof(a);


    // int arr[5] = {1,2,3,4,5};
    // char a;
    // cout<<sizeof(a);


    // //  find and print the maximum element in a given array of integers
    // int arr[5] = {1,12,32,49,15};
    // int ans = INT_MIN; // Initialize to the smallest possible integer
    // // Find the maximum element in the array
    // for(int i=0; i<5; i++){
    //     if(arr[i]>ans){
    //         ans = arr[i];
    //     }
    // }    
    // cout<<"Maximum Element = "<<ans<<endl;

    
    // // find and print the minimum element in a given array of integers
    int arr[] = {20,14,10,49,15};
    int ans = INT_MAX; // Initialize to the largest possible integer
    // Find the minimum element in the array
    for(int i=0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    cout<<"Minimum Element = "<<ans<<endl;


    return 0;
}