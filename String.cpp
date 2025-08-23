#include<iostream>
#include<cstring>
using namespace std;
int main(){

    // char str[] = {'a', 'b', 'c', '\0'};
    // cout<<str<<endl;
    // cout<<strlen(str)<<endl;


    // char str[100];
    // cout<<"Enter char array: "<<endl;
    // cin>>str;
    // cout<<"Output: "<<str;


    // char str[100];
    // cout<<"Enter char array: "<<endl;
    // cin.getline(str, 100);
    // cout<<"Output: "<<str<<endl;


 
    char str[100];     // character array
    cout<<"Enter char array: "<<endl;
    cin.getline(str, 12);     // take input (max 11 chars + '\0')
    for(int i=0; i<strlen(str); i++){        // loop until string length
        cout<<str[i]<<" ";
    }
    cout<<endl;

    return 0;
}