#include<bits/stdc++.h>
using namespace std;

/**
 * !Brute
*/
// int removeDuplicate(int arr[],int n){
//     set<int> st;

//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }

//     int index= 0;
//     for(auto it:st){
//         arr[index] = it;
//         index++;
//     }
//     return index;
// }

// int main(){
//     int arr[] = {1,1,2,2,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//    int set =removeDuplicate(arr,n);
//    cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i <set ; i++) {
//     cout << arr[i] << " ";
//   }
    
//     }


/**
 * * Optimal
*/


int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
    }
    return i+1;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int result = removeDuplicate(arr,n);

    for(int i=0;i<result;i++){
        cout<<arr[i]<<" ";
    }

}