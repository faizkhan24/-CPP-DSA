
#include<bits/stdc++.h>
using namespace std;

// Parameterized Recursion
// void printSum(int i, int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }

//     printSum(i-1,sum+i);
// }

// int main() {
//     int n =5;
//     printSum(n,0);
// }

//Functional Recursion

int printSum(int n){

if(n==0){
    return 0;
}

return n+ printSum(n-1);

}

int main(){
    int n =5;
    cout<<printSum(n);
}

