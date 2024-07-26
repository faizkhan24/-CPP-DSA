#include<bits/stdc++.h>
using namespace std;

int buyAndsell(int arr[],int n){

    int mini = arr[0],profit = 0;

    for(int i=1;i<n;i++){
        int cost = arr[i] - mini;
        profit = max(profit,cost);

        mini = min(mini,arr[i]);
    }
    return profit;
}

int main() {
    int arr[] = {7,1,5,3,6,4};

    int n = sizeof(arr)/sizeof(arr[0]);

   cout<<buyAndsell(arr,n); 
}