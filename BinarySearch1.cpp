#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";   // Input array size
//     cin>>n;
  
//     int arr[n];
//     cout<<"Enter elements: ";   // Input array elements (sorted)
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter key: ";   // Input element to search
//     cin>>key;

//     int start = 0;        // Starting index
//     int end = n-1;        // Ending index
//     int result = -1;      // To store index if found
//     int mid;              // Middle index

//     while(start <= end){  // Binary Search loop
//         mid = start + (end - start) / 2;   // Find mid

//         if(arr[mid] == key){   // Key found
//             result = mid;
//             break;
//         }
//         else if(arr[mid] < key){   // Search right half
//             start = mid + 1;
//         }
//         else{                      // Search left half
//             end = mid - 1;
//         }
//     }

//     if(result != -1){    // If key found
//         cout<<"Index found at: "<<result;
//     }
//     else{                // If not found
//         cout<<"not found: ";
//     }
// }




// // implement Binary Search using a function
// int BinarySearch(int arr[], int n, int key){
//     int start = 0, end = n-1, mid;
    
//     while(start <= end){
//         mid = start + (end - start) / 2;
//         if(arr[mid] == key){
//             return mid; // index return karo
//         }
//         else if(arr[mid] < key){
//             start = mid + 1; // right me search
//         }
//         else{
//             end = mid - 1; // left me search
//     }
//     return -1; // key nahi mili
// }
// }

// int main(){
//     int arr[100];
//     int n, key;
    
//     cout << "Enter size of array: ";
//     cin >> n;
    
//     cout << "Enter elements (sorted array): ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     cout << "Enter key: ";
//     cin >> key;
    
//     int result = BinarySearch(arr, n, key);
    
//     if(result != -1)
//         cout << "Key found at index " << result;
//     else
//         cout << "Key not found";
    
//     return 0;
// }



int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter Elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    int start=0, end=n-1, mid;
    int first = -1, last = -1;
    // First
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == key){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    // Last
    start=0, end=n-1;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==key){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    if(first!=-1 && last!=-1){
        cout<<"First"<<first<<endl;
        cout<<"Last"<<last<<endl;
    }
    else{
        cout<<"Not Found";
    }
}
