#include<iostream>
using namespace std;
int main(){

    // //   pyramid
    // int n = 5;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



// // A hollow X pattern (or cross) inside an n x n square
// int n;
// cout<<"n: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(i==j || i+j==n+1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }



//     // hollow butterfly pattern
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=2*(n-i); j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=2*(n-i); j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }



// // diamond pattern
// int n = 5;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }  
// for(int i=n-1; i>=1; i--){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// hollow pyramid pattern
int n = 5;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
        if(i==1 || i==n || j==1 || j==2*i-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}


}
