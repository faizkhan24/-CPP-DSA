#include<bits/stdc++.h>
using namespace std;


/**
 * !Brute
*/

// vector<int> leaders(vector<int> &arr){

//     int n = arr.size();
//     vector<int> ans;

//     for(int i=0;i<n;i++){
//         bool leader = true;

//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 leader = false;
//                 break;
//             }

//         }

//         if(leader==true){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }

/**
 * * Optimal */


vector<int> leaders(vector<int> &arr){
    int n= arr.size();
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }

        maxi = max(maxi,arr[i]);
    }
    return ans;
}


int main() {
    vector<int> arr = {10,22,12,3,0,6};

    vector<int> ans = leaders(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
}