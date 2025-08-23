#include<iostream>
using namespace std;

// int printHello(){
//     cout<<"Hello World"<<endl;
//     return 2;
// }
// int main(){
//     cout<<printHello();
// }


// int Sum(int a, int b){
//     return a+b;
// }
// int main(){
//     cout<<Sum(2, 3);
// }


// int Sum(int a, int b){
//     return a+b;
// }
// int main(){
//     int x = 4, y = 5;     // Pass by Value
//     cout<<Sum(x, y);
// }


// int Sum(int a, int b){
//     a = a+10;
//     b = b+5;
//     return a+b;
// }
// int main(){
// int a=4, b=5;
// cout<<Sum(a,b)<<endl;
// cout<<a<<endl;
// cout<<b<<endl;       // a and b remain unchanged due to pass by value
// }


// int changeA(int a){
//     a = a*2;
//    cout<<a<<endl;  // This will print the modified value of a;
// }
// int main(){
//     int a = 5;
//     changeA(a);
//     cout<<a;
// }



// // Function to find the maximum of two numbers
// int max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     cout<<max(5, 6);
// }


// // Function to find the minimum of three numbers
// int min(int a, int b, int c){
//     if(a<b && a<c){
//         return a;
//     }
//     else if(b<a && b<c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// int main(){
//     cout<<min(10, 5, 8);
// }


// // Calculate sum of numbers from 1 to N
// int sum(int n){
//     int sum = 0;
//     for(int i=0; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sum(5)<<endl;
//     cout<<sum(6);  
// }


// // Function to calculate factorial of a number
// int calculateFact(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     cout<<calculateFact(5)<<endl;
//     cout<<calculateFact(6);
// }


// int sumOfDigit(int n){
//     int sum = 0;
//     while(n>0){
//         sum+=n%10;
//         n/=10;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumOfDigit(12345)<<endl;
//     cout<<sumOfDigit(6789);
// }


// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nMr = factorial(n-r);
//     return fact_n/(fact_r * fact_nMr);
// }
// int main(){
//     int n=5, r=2;
//     cout<<nCr(n,r);
// }


// // check whether a given number is even or odd
// void EvenOdd(int n){
//     if(n%2==0){
//         cout<<"Even"<<endl;
//     }
//     else{
//         cout<<"Odd"<<endl;
//     }
// }
// int main(){
//     EvenOdd(5);
//     EvenOdd(4);
// }



// // swap two numbers using pass by reference
// void swap(int &a, int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b;
// }
// int main(){
//     int x = 5, y = 10;
//     swap(x, y);
//     // cout<<x<<" "<<y;
// }


// // swap two numbers using pass by value
// void swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int x = 5, y = 10;
//     swap(x, y);
//     cout<<x<<" "<<y;
// }


// reverse of a number
int reverse(int n){
    int rev=0, digit;
    while(n>0){
        digit = n%10;
        rev =rev*10+digit;
        n/=10;
    }
    return rev;
}
int main(){
    cout<<reverse(12345)<<endl;
    cout<<reverse(6789);
}

