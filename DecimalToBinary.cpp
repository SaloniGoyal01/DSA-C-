#include<iostream>
using namespace std;
int main(){
    int decimal;
    cout<<"Enter a number: ";
    cin>>decimal;
    int rem = 0;
    int ans = 0;
    int pow = 1;
    while(decimal > 0){
        rem = decimal%2;
        ans = (pow*rem)+ans;
        pow*=10;
        decimal/=2;
    }
    cout<<"Binary "<<ans;
}