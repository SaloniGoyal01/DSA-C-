#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    int height[n];
    cout<<"Enter height: ";
    for(int i=0; i<n; i++){
        cin>>height[i];
    }

    int maxWater = 0;
    int lp = 0;
    int rp = n-1;

    while(lp < rp){
        int w = rp - lp;
        int ht = min(height[rp], height[lp]);
        int currWater = w*ht;

        maxWater = max(maxWater, currWater);

        if(height[lp] < height[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    cout<<"Max Water: "<<maxWater<<endl;
    

}