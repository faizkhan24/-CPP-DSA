#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &A[],vector<int>  &B[],int n1,int n2){
    int vis[] = {0};
    vector<int> ans;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(A[i]==B[i] && vis[j]==0){
                ans.push_back(A[i]);
                vis[j]=1;
                break;
            }

            if(B[j]>A[i]) break;
        }

    }
    return ans;
}

int main(){
    vector<int> A  = {1,2,2,3,3,4,5,6};
    vector<int> B = {2,3,3,5,6,7};

    int n1 = sizeof(A)/sizeof(A[0]);
    int n2 = sizeof(B)/sizeof(B[0]);

  vector<int> ans =   intersection(A,B,n1,n2);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

}