#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    int digit, sum=0, original;
    original=n;
    while(n>0){
        digit=n%10; 
        sum += digit * digit * digit; 
        n/=10;
    }
    if(sum==original){
        cout<<original<<" "<<"is an Armstrong number";
    }
    else{
        cout<<original<<" "<<"is not an Armstrong number";
    }
    
    
    
}