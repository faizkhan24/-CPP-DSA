#include<bits/stdc++.h>
using namespace std;

int armStrong(int n){
    int dup = n;
    int sum=0;
    while(dup>0){
        int lastDigit = dup%10;
        sum+=(lastDigit*lastDigit*lastDigit);
        dup=dup/10;
    }
    return sum;
}

int main() {
    int n=153;
    int armstrongNo = armStrong(n);

    if(armstrongNo==n){
        cout<<"armstrong";
    }

    else{
        cout<<"not";
    }
    return 0;
}
