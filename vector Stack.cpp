#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(2);
    s.push(5);
    s.push(7);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;

    stack<int> s1;
    s1.swap(s);     // s1 has all elements of s, and s becomes empty

    cout<<"s size: "<<s.size()<<endl;      // will print 0
    cout<<"s1 size: "<<s1.size()<<endl;    // will print 3

}
