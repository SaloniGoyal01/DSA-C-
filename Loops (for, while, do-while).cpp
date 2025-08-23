#include<iostream>
using namespace std;
int main(){

// // Print numbers from 1 to N
// for(int i=1; i<=5; i++){
//     cout<<i<<" ";
// }


// // Print numbers from n to 1
// for(int i=5; i>0; i--){
//     cout<<i<<" ";
// }


// // Print sum of first N natural numbers
// int n;
// cout<<"Enter a number: ";
// cin>>n;
// int sum = 0;
// for(int i=0; i<=n; i++){
//     sum+=i;
// }
// cout<<sum;


// // Print multiplication table of a number
// int n;
// cout<<"Enter a number: ";
// cin>>n;
// for(int i=1; i<=10; i++){
//     cout<<n<<" X "<<i<<" = "<<n*i<<endl;
// }


// // Reverse a number
// int n, reverse=0, digit;
// cout<<"Enter a number: ";
// cin>>n;
// while(n!=0){
//     digit = n%10;
//     reverse = (reverse*10) + digit;
//     n/=10;
// }
// cout<<reverse;


// // Check if a number is a palindrome
// int n, digit, reverse=0, original;
// cout<<"Enter a number: ";
// cin>>n;
// original = n;
// while(n!=0){
//     digit = n%10;
//     reverse = (reverse*10) + digit;
//     n/=10;
// }
// if(original == reverse){
//     cout<<"Palindrome";
// }
// else{
//     cout<<"Not a Palindrome";
// }


// // Factorial of a number
// int n, fact=1;
// cout<<"Enter a number: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     fact*=i;
// }
// cout<<fact;


// // Sum of digits of a number
// int n, sum=0, digit;
// cout<<"Enter a number: ";
// cin>>n;
// while(n != 0){
//     digit = n%10;
//     sum+=digit;
//     n/=10;
// }
// cout<<sum;



// // Fibonacci series
// int n, a=0, b=1, c;
// cout<<"Enter the number of terms: ";
// cin>>n;
// for(int i=0; i<n; i++){
//     cout<<a<<" ";
//     c = a+b;
//     a = b;
//     b = c;
// }


//  Armstrong number
int n, sum=0, temp, digit;
cout<<"Enter a number: ";
cin>>n;
temp = n;
while(temp>0){
    digit = temp%10;
    sum = sum+(digit*digit*digit);
    temp/=10;
}
if(sum==n){
    cout<<n<<"is an Armstrong number";
}
else{
    cout<<n<<"is not an Armstrong number";
}








    return 0;
}