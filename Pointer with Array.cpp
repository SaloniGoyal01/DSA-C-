#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};   
    int *ptr = arr; 
    
    // Print the address of first Element or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    // Print the address of second Element or 1 index
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    
    // Print the value of 0 index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    //Print all the addresses
    for(int i=0; i<5; i++){
        cout<<arr+i<<endl;
    }

    // Print all the values
    for(int i=0; i<5; i++){
        cout<<*(arr+i)<<" ";
    }

    cout<<endl;

    // Print all the value
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    // Print all the address
    for(int i=0; i<5; i++){
        cout<<ptr+i<<" ";
    }

    cout<<endl;

    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    
}