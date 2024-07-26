#include <bits/stdc++.h>
using namespace std;

// int countNumber(int num,int arr[],int n){

//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==num){
//             cnt++;
//         }
//     }
//     return cnt;
// }

// int main(){
//     int arr[] = {1,2,1,2,3};
//     int num=3;
//     int n =5;
//    cout<<countNumber(num,arr,n);
// }



int main() {
    int n;
    cin >> n;
    int *arr = new int[n]; // Dynamic memory allocation

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // Fetching
        cout<<"Fetching"<<endl;
        cout << hash[number] << endl;
    }



    return 0;
}
