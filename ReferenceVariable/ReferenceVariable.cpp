#include<bits/stdc++.h>

using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main() {
    // int i=24;
    // int &j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;

    // j++;
    
    // cout<<j<<endl;

    int n = 5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;
 
 
}