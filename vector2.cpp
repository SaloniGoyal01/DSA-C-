#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};    
    vector<int> v2(v1);

    // Erase only change size not capacity
    v2.erase(v2.begin());
    v2.erase(v2.begin()+1, v2.begin()+3);

    v2.insert(v2.begin()+2, 100);

    // v2.clear();      // // Remove all Elements from vector

    for(int val: v2){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"size: "<<v2.size()<<endl;
    cout<<"capacity: "<<v2.capacity()<<endl;

    

}