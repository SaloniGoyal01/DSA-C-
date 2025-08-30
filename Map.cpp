#include<iostream>
#include<map>
using namespace std;
int main(){

    // map stores key-value pairs in sorted order of keys (ascending by default)
    map<string, int> m;

     // inserting values (map will sort automatically by key)
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablets"] = 120;
    m["watch"] = 50;

    // iterate through the map
    // 'p' is a pair: p.first = key, p.second = value
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;     // keys printed in ascending order
    }
    cout<<endl;


    map<string, int, greater<string>> m1;
    m1["tv"] = 100;
    m1["tablet"] = 120;
    m1["mobile"] = 140;
    m1["laptop"] = 160;
    m1["computer"] = 180;

    for(auto p: m1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<"count: "<<m.count("laptop")<<endl;
    cout<<endl;



    map<string, int> m2;
    m2["tv"] = 100;
    m2["tablet"] = 120;
    m2["mobile"] = 140;
    m2["laptop"] = 160;
    m2["computer"] = 180;
    
    m2.emplace("camera", 150);

    for(auto p: m2){
        cout<<p.first<<" "<<p.second<<endl;
    }

   




}
