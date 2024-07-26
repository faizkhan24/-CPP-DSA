#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    //pre compute




    //queries
    map<char,int> mpp;
    for(int i =0;i<s.length();i++){
        mpp[s[i]]++;
    }

    int q;
    cin>>q;

    while(q--){
      char ch;
      cin>>ch;

        //fetch
        cout<<mpp[ch]<<endl;
    }
}