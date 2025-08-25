#include<iostream>
using namespace std;
int main(){

    // int arr[6] = {10, 2, 6, 4, 9, 5};
    // for(int i=0; i<=5; i++){
    //     int index = i;
    //     for(int j=i+1; j<=5; j++){
    //         if(arr[j]<arr[index]){
    //             index = j;
    //         }
    //     }
    //     swap(arr[i], arr[index]);
    // }
    // for(int i=0; i<=5; i++){
    //     cout<<arr[i]<<" ";
    // }

    
    int arr[100];
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;
    cout<<"Enter Elements of array: ";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
                
            }
            
        }
        swap(arr[i], arr[index]);
    }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        
    }


}