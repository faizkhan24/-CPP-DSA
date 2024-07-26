#include<bits/stdc++.h>
using namespace std;

    /**
     * !Brute
    */
    // long long maximumSubarray(vector<int> &arr){
    //     int maxi = INT_MIN;
    //     for(int i=0;i<arr.size();i++){
    //         int sum = 0;
    //         for(int j=i;j<arr.size();j++){
    //             sum+=arr[j];
    //             maxi = max(maxi,sum);
    //         }
    //     }
    //     return maxi;
    // }

    /**
     * * Optimal -> Kadane Algo's
    */

   long long maximumSubarray(vector<int> &arr){
    // arr.push_back(5);
    int maxi = INT_MIN;
    int sum = 0;

    for(auto it : arr){
        sum+=it;
        maxi = max(maxi,sum);
        if(sum<0) sum=0;
    }
    return maxi;
   }

int main() {
    vector<int> arr  = {-2,-3,4,-1,-2,1,5,-3};
   cout<<maximumSubarray(arr);
}