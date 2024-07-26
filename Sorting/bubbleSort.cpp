#include<bits/stdc++.h>
using namespace std;

// void bubbleSort(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         int didSwap=0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j+1],arr[j]);
//                 didSwap=1;
//             }
//         }
//         if(didSwap==0)[
//             return;
//         ]
//     }
// }

// int main(){
//     int arr[] = {5,4,3,2,1};

//     int n=5;
//     bubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//bubble sort using recursion

void bubbleSort(int arr[],int n){

    if(n==1)
    return;

    for(int j=0;j<=n-2;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
        }

       
    }
     bubbleSort(arr,n-1);
}

int main(){
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before bubble sort"<<endl;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,n);


    cout<<"After bubble sort"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

