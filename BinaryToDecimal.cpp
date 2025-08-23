#include<iostream>
using namespace std;
int main(){
    int binary;
    cout<<"Enter a number: ";
    cin>>binary;
    int rem=0, ans=0, pow=1;
    while(binary > 0){
        rem = binary%10;
        ans = ans+(pow*rem);
        binary/=10;
        pow*=2;
    }
    cout<<"Decimal "<<ans;

    return 0;
}