#include<bits/stdc++.h>
using namespace std;
int countNumber(int n){
    int cnt=0;
    int ans = 0;
    while(n>0){
        int digit = n%10;
        ans = (ans*10)+digit;
        n=n/10;
    }

 
    return ans;
}

int main() {
    
    int n = 12345;
    cout<<countNumber(n);

  
}