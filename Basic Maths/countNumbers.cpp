#include<iostream>
using namespace std;


int countNumber(int n){
    int cnt=0;
    int ans = 0;
    int x = n;
    while(x>0){
        x=x/10;
        cnt++;
    }

 
    return cnt;
}

int main() {
    
    int n = 121;
   cout<<countNumber(n);

    
}

