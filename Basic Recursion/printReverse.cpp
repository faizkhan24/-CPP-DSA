#include<bits/stdc++.h>
using namespace std;


// void printReverse( int i, int n){

//     if(i<1){
//         return;
//     }

//     cout<<i;
//     printReverse(i-1,n);

// }

// int main() {
//     int n=5;

//     printReverse(5,n);
// }


// print N to 1 using backtacking

void printReverse(int i,int n){
    if(i>n){
        return;
    }

    printReverse(i+1,n);
    cout<<i;
}

int main(){
    int n =5;

    printReverse(1,n);
}