#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Stalls: ";
    cin>>n;

    int k;
    cout<<"Cows: ";
    cin>>k;

    cout<<"Enter Stalls Position: ";
    int stalls[n];
    for(int i=0; i<n; i++){
        cin>>stalls[i];
    }
    sort(stalls, stalls+n);

    int start = 1;      // minimum possible distance
    int end = stalls[n-1] - stalls[0];    // maximum possible distance
    int ans = 0, mid;

    while(start<=end){
        mid = start+(end-start)/2;

        int count = 1;          // first cow placed at stalls[0]
        int pos = stalls[0];    // last placed cow

        // Try placing remaining cows
        for(int i=1; i<n; i++){
            if(stalls[i]-pos >= mid){
                count++;
                pos = stalls[i];
            }
        }

        // After trying all stalls, check if we placed all cows
        if(count >= k){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<ans;  

}