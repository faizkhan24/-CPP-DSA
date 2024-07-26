#include<bits/stdc++.h>
using namespace std;
/**
 * ! Brute Approach
 * */ 
// int largestElement(vector<int>& arr){

//     sort(arr.begin(),arr.end());

//     return arr[arr.size()-1];

    
// }

// int main(){
//     vector<int> arr1 = {2,5,1,3,0};
//     cout<<largestElement(arr1);
// }


/**
 * * Optimal
*/

// int largestElement(int arr[],int n){
//     int maxElement=0;
//     for(int i=0;i<n;i++){
//         maxElement = max(maxElement,arr[i]);
//     }
//     return maxElement;
// }


// int main(){
//     int arr[] = {2,5,1,3,0};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<largestElement(arr,n);
// } 


/**
 * * Optimal 2
*/

int largestElement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<largestElement(arr,n);
} 