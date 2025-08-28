#include<iostream>
using namespace std;
int main(){

// // Find Peak Element in an Array
// int n;
// cout<<"Enter n: ";
// cin>>n;

// cout<<"Enter Array Elements: ";
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// int start=0, end=n-1, mid;
// while(start<=end){
//     mid = start+(end-start)/2;
//     if((mid==0 || arr[mid]>arr[mid-1]) && 
//        (mid==n-1 || arr[mid]>arr[mid+1])){
//         cout<<arr[mid]<<endl;
//         return 0;
//     }
//     else if(mid>0 && arr[mid]>arr[mid-1]){
//         start = mid+1;
//     }
//     else{
//         end = mid-1;
//     }
// }



    // // Find the minimum element in a rotated sorted array
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;

    // cout<<"Enter Elements: ";
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int start=0, end=n-1, mid, ans=arr[0];
    // while(start<=end){
    //     mid=start+(end-start)/2;
    //     if(arr[mid]>=arr[0]){
    //         start=mid+1;
    //     }
    //     else{
    //         ans = arr[mid];
    //         end = mid-1;
    //     }
    // }
    // cout<<ans<<endl;



// // Search for a target element in a rotated sorted array
// int n;
// cout<<"n: ";
// cin>>n;
// cout<<"Enter elements: ";
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int target;
// cout<<"Enter Target Element: ";
// cin>>target;
// int start=0, end=n-1, mid;
// while(start<=end){
//     mid=start+(end-start)/2;
//     if(arr[mid]==target){
//         cout<<mid;
//         return 0;
//     }
//     else if(arr[mid]>=arr[start]){
//         if(arr[start]<=target && target<=arr[mid]){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     else{
//         if(arr[mid]<=target && target<=arr[end]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }   
// }
// cout<<"Target not found"<<endl;


// // Find the k-th missing positive number in a sorted array
// int n;
// cout<<"n: ";
// cin>>n;
// cout<<"Enter Elements: ";
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int k;
// cout<<"k: ";
// cin>>k;
// int start=0, end=n-1, mid, ans=n;
// while(start<=end){
//     mid=start+(end-start)/2;
//     if(arr[mid]-(mid+1) >=k){
//         ans = mid;
//         end = mid-1;
//     }
//     else{
//         start = mid+1;
//     }
// }
// cout<<ans+k;



// Find the k-th missing number in this sequence
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<"Enter Elements: "<<" ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int start=0, end=n-1, mid, ans=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-arr[0]-mid >= key){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<arr[0]+key-1+ans;


}