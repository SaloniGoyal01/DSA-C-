#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    int nums[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int prefix[n], suffix[n], ans[n];

    // Prefix
    prefix[0] = 1;
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // Suffix
    suffix[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // Answer
    for(int i=0; i<n; i++){
    ans[i] = prefix[i] * suffix[i];
    }

    cout<<"Result: "<<endl;
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}