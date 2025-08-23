#include<iostream>
using namespace std;

// // implement Binary Search on a sorted array.
// int binarySearch(int arr[], int size, int value){
//     int start = 0;
//     int end = size - 1;
//     while(start<=end){
//         int mid = (start+end)/2;
//         if(arr[mid] == value){
//             return mid;
//         }
//         else if(arr[mid] < value){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int even[6] = {2,4,6,8,10};
//     int odd[5] = {3,6,9,12,15};
//     int index = binarySearch(even, 6, 10);
//     cout<<"index "<<index<<endl;
//     int index1 = binarySearch(odd, 5, 12);
//     cout<<"index1 "<<index1<<endl;

// }


// // find the first and last occurrence of a given element in a sorted array using binary search.
// int firstOcc(int arr[], int size, int value){
//     int start = 0;
//     int end = size-1;
//     int ans = -1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(arr[mid]==value){
//             ans = mid;
//             end = mid-1;
//         }
//         else if(arr[mid]<value){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return ans;
// }
// int lastOcc(int arr[], int size, int value){
//     int start = 0;
//     int end = size-1;
//     int ans = -1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(arr[mid]==value){
//             ans = mid;
//             start = mid+1;
//         }
//         else if(arr[mid]<value){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[10] = {1,1,1,2,2,2,2,2,3,3};
//     int size = 10;
//     int value = 2;
//     cout<<firstOcc(arr, size, value)<<endl;
//     cout<<lastOcc(arr, size, value);
// }


// // find the pivot element in a rotated sorted array using binary search.
// int getPivot(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(arr[mid]>=arr[0]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;  
//         }
//     }
//     return start;
// }
// int main(){
//     int arr[5] = {11, 3, 16, 8, 9};
//     cout<<"Pivot index: "<<getPivot(arr, 5)<<endl;
//     cout<<"Pivot index: "<<arr[getPivot(arr, 5)]<<endl;
// }


int sqrtBinarySearch(int n){
    int start = 0;
    int end = n;
    int ans = -1;
    while(start<=end){
        long long mid = start+(end - start)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid < n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sqrtBinarySearch(n)<<endl;
}