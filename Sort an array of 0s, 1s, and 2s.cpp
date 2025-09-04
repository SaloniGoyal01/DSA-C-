#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    int num[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
    cin>>num[i];
    }

    int low=0, mid=0, high=n-1;

    while(mid <= high){
        if(num[mid] == 0){
            swap(num[low], num[mid]);
            mid++, low++;
        }

        else if(num[mid] == 1){
            mid++;
        }

        else{
            swap(num[mid], num[high]);
            high--;
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    
}