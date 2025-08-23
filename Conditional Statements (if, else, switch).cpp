#include<iostream>
using namespace std;
int main(){

// // Check if a number is positive, negative, or zero.
// cout<<"Enter a number: ";
// int num;
// cin>>num;
// if(num > 0){
//     printf("Positive\n");
// }
// else if(num < 0){
//     printf("Negative\n");
// }
// else{
//     printf("Zero\n");
// }


// // Check if a number is even or odd
// cout<<"Enter a number: ";
// int num;
// cin>>num;
// if(num % 2 ==0){
//     cout<<"Even"<<endl;
// }
// else{
//     cout<<"Odd";
// }


// // Find the largest of three numbers
// cout<<"Enter three numbers: ";
// int a,b,c;
// cin>>a>>b>>c;
// if(a>b && a>c){
//     printf("Largest number is %d\n", a);
// }
// else if(b>a && b>c){
//     printf("Largest number is %d\n", b);
// }
// else{
//     printf("Largest number is %d\n", c);
// }


// // Check if a year is a leap year
// cout<<"Enter a year: ";
// int year;
// cin>>year;
// if((year%4==0) && (year%400==0 || year%400!=0)){
//     cout<<"Leap year"<<endl;
// }
// else{
//     cout<<"Not a leap year";
// }


// // Simple calculator using switch
// int a,b;
// char op;
// cout<<"Enter two numbers: ";
// cin>>a>>b;
// cout<<"Enter an operator (+, -, *, /): ";
// cin>>op;
// switch(op){
//     case '+':
//     cout<<"Addition: "<<a+b<<endl;
//     break;

//     case '-':
//     cout<<"Subtraction: "<<a-b<<endl;
//     break;

//     case '*':
//     cout<<"Multiplication: "<<a*b<<endl;
//     break;

//     case '/':
//     if(b!=0){
//         cout<<"Division: "<<a/b<<endl;
//     }
//     else{
//         cout<<"Division by zero is not allowed"<<endl;
//     }
//     break;

//     default:
//     cout<<"Invalid operator"<<endl;
// }


// // Grade system (A/B/C/D) based on marks
// cout<<"Enter your marks: ";
// int marks;
// cin>>marks;
// if(marks>=90 && marks<=100){
//     printf("A");
// }
// else if(marks>=80 && marks<90){
//     printf("B");
// }
// else if(marks>=70 && marks<80){
//     printf("C");
// }
// else{
//     printf("D");
// }


// // Check if a character is a vowel or consonant
// char ch;
// cout<<"Enter a character: ";
// cin>>ch;
// if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//     printf("Vowel");
// }
// else{
//     printf("Consonant");
// }


// Check if a character is uppercase, lowercase, digit, or special symbol
char ch;
cout<<"Enter a character: ";
cin>>ch;
if(ch>='A' && ch<='Z'){
    printf("upper case");
}
else if(ch>='a' && ch<='z'){
    printf("lower case");
}
else if(ch>='0' && ch<='9'){
    printf("Digit");
}
else{
    printf("Special Symbol");
}


return 0;
}
