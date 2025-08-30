#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 120);
    m.emplace("tablet", 150);
    m.emplace("watch", 200);

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;  
}