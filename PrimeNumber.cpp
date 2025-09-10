#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    bool isPrime = true;
    if(n%2==0){
        isPrime = false;
    }
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"prime"<<n;
    }
    else{
        cout<<"not";
    }
    
    
}