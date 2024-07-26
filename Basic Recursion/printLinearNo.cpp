
#include<bits/stdc++.h>
using namespace std;

// void printLinearNo(int i, int n){

//     if(i>n)
//         return;
   

//     cout<<i;

//     printLinearNo(i+1,n);

// }

// int main(){
//     int n=5;

//     printLinearNo(1,n);
//     return 0;
// }


//Print 1 to N using backtracking

void printLinearNo(int i, int n){

    if(i<1)
    return;

    printLinearNo(i-1,n);
    cout<<i;

}


int main(){
    int n=5;

    printLinearNo(5,n);
    return 0;
}