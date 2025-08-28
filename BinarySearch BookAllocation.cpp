#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n: ";
    cin>>n;   // input number of books
    
    cout<<"Enter Elements: ";
    int arr[n];
    int sum = 0, maxi = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];        // input pages in each book
        sum+=arr[i];        // total sum of pages
        maxi = max(maxi, arr[i]); // find maximum pages (largest single book)
    }

    int m;
    cout<<"Enter number of student: ";
    cin>>m;   // input number of students

    // binary search range
    int start=maxi, end=sum, mid, ans=sum;

    // binary search loop
    while(start<=end){
        mid=start+(end-start)/2;  // middle of range (current guess)

        int pages=0, count=1;     // pages = pages for current student, count = students needed
        for(int i=0; i<n; i++){
            pages+=arr[i];        // add book to current student
            if(pages>mid){        // if exceeds allowed pages
                count++;          // need new student
                pages=arr[i];     // start new student with this book
            }
        }

        // after distributing books:
        if(count<=m){             // if students required are within limit
            ans = mid;            // store possible answer
            end = mid-1;          // try smaller value
        }
        else{                     // if students required > m
            start = mid+1;        // increase mid
        }
    }

    cout<<"Minimum possible maximum pages = "<<ans<<endl; 
}
