#include<bits/stdc++.h>
using namespace std;

int palindrome(int n){

    int ans = 0;
    while(n>0){
        int digit = n%10;
        ans= (ans*10)+digit;
         n =n/10;
    }

    return ans;

}

int main(){
    int n= 123;
    int reverseNo = palindrome(n);

    if(reverseNo==n){
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }
}