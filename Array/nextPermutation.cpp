#include<bits/stdc++.h>
using namespace  std;


vector<int> nextPermutation(vector<int> &arr,int n){
    //Longest Prefix Match
      int index = -1;
    for(int i=n-2;i>=0;i--){
      
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }

    reverse(arr.begin()+index+1,arr.end());
    return arr;
}

int main() {
    vector<int> arr = {2,1,5,4,3,0,0};
    int n = arr.size();

    arr =   nextPermutation(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}