#include<bits/stdc++.h>
using namespace std;


void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
//  p = p+1;
//  cout<<"inside function "<<p<<endl;
 *p = *p+1;
//  cout<<"updated value : "<<*p<<endl;


}

int getSum(int *arr,int n){
    cout<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    // int value = 5;
    // int *p = &value;

    // print(p);

    // cout<<"Before "<<*p<<endl;
    // update(p);
    // cout<<"After "<<*p<<endl;

    int arr[6] = {1,2,3,5,6,17};
    // int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum : "<<getSum(arr+3,3)<<endl;

    return 0;
}