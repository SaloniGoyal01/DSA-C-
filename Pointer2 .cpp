#include<iostream>
using namespace std;

int main(){
    char name = 'S';
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<(void*)&name<<endl;
    
    char *ptr = &name;
    cout<<ptr<<endl;
}
 

