#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(10);

    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Size after push: "<<v.size()<<endl;
    cout<<"Capacity after push: "<<v.capacity()<<endl;

    v.pop_back();
    cout<<"Size after pop: "<<v.size()<<endl;
    cout<<"Size after pop: "<<v.capacity()<<endl;

    v.emplace_back(5);
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"value at index 2: "<<v[2]<<" OR "<<endl<<v.at(2)<<endl;

    cout<<"front Element: "<<v.front()<<endl;
    cout<<"back Element: "<<v.back()<<endl;

}