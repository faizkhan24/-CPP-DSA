#include <bits/stdc++.h>
using namespace std;

/**
 * ! Brute
*/

    // void moveZeros(int arr[],int n){
    //     vector<int> temp;
    //     //step 1
    //     for(int i=0;i<n;i++){
    //         if(arr[i]!=0){
    //             temp.push_back(arr[i]);
    //         }
    //     }

    //     //step 2

    //     for(int i=0;i<temp.size();i++){
    //         arr[i]=temp[i];
    //     }

    //     //step 3 

    //     int nonZero = temp.size();
    //     for(int i=nonZero;i<n;i++){
    //         arr[i]=0;
    //     }
        

    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }


    // }

    /**
     * *Optimal
    */

   void moveZeros(int arr[], int n){
    int j=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   }

int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr,n);
}