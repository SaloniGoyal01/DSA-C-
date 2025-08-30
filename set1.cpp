#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){

    // multiset allows duplicate values (unlike set)
    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    // print elements (multiset keeps them sorted, including duplicates)
    for(int val: s){
        cout<<val<<" ";
    }
    cout<<endl;



    unordered_set<int> us;
    us.insert(10);
    us.insert(30);
    us.insert(20);
    us.insert(10);      // duplicate → ignored

    for(int val: us){
        cout<<val<<" ";
    }
    cout<<endl;

}