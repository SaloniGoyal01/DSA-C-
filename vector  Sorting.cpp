#include<iostream>
#include<algorithm>   // for sort
#include<vector>
// #include<set>
// #include<unordered_set>
using namespace std;
int main(){

    int arr[5] = {1,5,2,7,4};
    sort(arr, arr+5);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;



    vector<int> v = {3,2,6,1,8};
    sort(v.begin(), v.end());
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;


    vector<int> v1 = {10, 5, 3, 11, 2};
    sort(v1.begin(), v1.end(), greater<int>());

    for(int val: v1){
        cout<<val<<" ";
    }
    cout<<endl;



    vector<pair<int, int>>vec = {{3,1}, {4,2}, {3,4}, {7,9}};
    sort(vec.begin(), vec.end());
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    


}