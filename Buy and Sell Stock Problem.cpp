#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    int price[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>price[i];
    }

    int maxPrice = 0;
    int BuyPrice = price[0];

    for(int i=1; i<n; i++){
        if(BuyPrice < price[i]){
            maxPrice = max(maxPrice, price[i] - BuyPrice);
        }
        else if(BuyPrice > price[i]){
            BuyPrice = price[i];
        }
    }
    cout<<"max price: "<<maxPrice<<endl;
}