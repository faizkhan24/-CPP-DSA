#include<bits/stdc++.h>
using namespace std;

//functional recursion
// int fact(int n){
//     if(n==0)
//     return 1;

//     return n+ fact(n-1);
// }

// int main(){
//     int n=5;
//     cout<<fact(n);
// }

//parameterized recursion

int factorial(int i,int n , int fact){

    if(i>n){
        cout<<fact;
        return 1;
    }

    factorial(i+1,n,fact*i);
}

int main(){
    int n =5;
    factorial(1,n,1);
}