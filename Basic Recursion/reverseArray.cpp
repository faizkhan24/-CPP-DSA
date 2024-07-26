
#include<bits/stdc++.h>
using namespace std;


// void reverse(int arr[],int length){
//     int left = 0;
//     int right = length-1;

//     while(left<right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     for(int i=0;i<length;i++){
//         cout<<arr[i];
//     }


// }


// int main(){
//     int arr[5] ={1,2,3,4,5};
//     reverse(arr,5);
// }

//using recursion

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];  
    }
}

void reverseArray(int arr[],int start,int end){
    if(start<end){
        swap(arr[start],arr[end]);
        reverseArray(arr,start+1,end-1);
    }
}

int main(){
    int n =5;

    int arr[] ={1,2,3,4,5};
    reverseArray(arr,0,n-1);
    printArray(arr,n);
    return 0;
}