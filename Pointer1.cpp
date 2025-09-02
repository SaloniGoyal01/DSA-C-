#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;

    float m = 2.5;
    float *ptr1 = &m;
    cout<<ptr1<<endl;
  
    int b = 20;
    int c = 30;
    int *p = &b;
    cout<<p<<endl;
    cout<<*p<<endl;
    int *p1 = &c;
    cout<<p1<<endl;
    cout<<*p1<<endl;



}