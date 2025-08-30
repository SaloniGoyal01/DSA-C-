#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(int val: s){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<endl;


    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(5);
    s1.insert(10);

    cout<<"lower bound = "<<*(s1.lower_bound(4))<<endl;
    for(int val: s1){
        cout<<val<<" ";
    }
    cout<<endl;

}