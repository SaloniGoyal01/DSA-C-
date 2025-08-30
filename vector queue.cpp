#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(2);
    q.push(5);
    q.push(10);

    // while(!q.empty()){
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }
    // cout<<endl;

    queue<int> q1;
    q1.swap(q);

    cout<<"q size: "<<q.size()<<endl;
    cout<<"q1 size: "<<q1.size()<<endl;
}