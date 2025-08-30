#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<deque>
using namespace std;
int main(){

    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while(! q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;


    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(5);
    q1.push(4);
    q1.push(10);
    q1.push(3);

    while(! q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl; 

}

