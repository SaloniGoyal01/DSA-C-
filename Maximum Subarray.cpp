// Kadane's Algorithm

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// int main(){

    // // Subarray
    // int n = 5;
    // int arr[5] = {11,21,13,34,25};
    // for(int st=0; st<n; st++){
    //     for(int end=st; end<n; end++){
    //         for(int i=st; i<=end; i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    // // Max. Subarray Sum
    // int n = 5;
    // int arr[5] = {10, 20, 30, 40, 50};
    // int maxSum = INT_MIN;
    // for(int st=0; st<=n; st++){
    //     int currSum = 0;
    //     for(int end=st; end<n; end++){
    //         currSum+=arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout<<maxSum;

// }



// // Maximum Subarray Sum
 int maxSubArray(vector<int>& nums) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int val : nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}
int main() {
    vector<int> nums = {11, 21, -13, 34, 25};
    cout << "Maximum Subarray Sum = " << maxSubArray(nums) << endl;
}











