#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    for(auto it = v.begin(); it != v.end(); it++){   // Forward
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it = v.rbegin(); it != v.rend(); it++){    // for reverse order(Backward)
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<endl;


    vector<pair<int, int>>v1 = {{1,2}, {2,3}, {3,4}};
    v1.push_back({4,5});
    v1.emplace_back(5,6);
    for(auto p: v1){
        cout<<p.first<<" "<<p.second<<endl;
    }
}