#include<bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;


/**
 * ! Brute if there is no duplicate
*/

// int getElements(int arr[],int n){

//     if(n==0 || n==1){
//         return -1;
//     }

//     sort(arr,arr+n);

//     int secondLargest = arr[n-2];
//     int secondSmallest = arr[1];

//     cout<<"Second Largest "<<secondLargest<<endl;
//     cout<<"Second Smallest "<<secondSmallest<<endl;
// }

// int main(){
//     int arr[] = {1,2,4,6,7,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     getElements(arr,n);
//     return 0;

// }

/**
 *  & Better Approach
*/

// int getElements(int arr[],int n){

//    if(n==0 || n==1){
//     cout<<0<<" "<<-1;
//    }

//    int small = INT_MAX,ssmall=INT_MAX;
//    int large = INT_MIN,slarge=INT_MIN;
//    for(int i=0;i<n;i++){
//     small = min(arr[i],small);
//     large = max(arr[i],large);
//    }

//    for(int i=0;i<n;i++){
//     if(arr[i]<ssmall && arr[i]!=small){
//         ssmall=arr[i];
//     }
//     else if(arr[i]>slarge && arr[i]!=large){
//         slarge=arr[i];
//     }
//    }
//    cout<<"Second Small "<<ssmall<<endl;
//    cout<<"Second Large "<<slarge<<endl;
// }


// int main(){
//     int arr[] = {1,2,4,7,7,5};

//     int n = sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }


/*
* Optimal Approach
*/

int secondlargest(vector<int> a, int n) {
    int largest = a[0];
    int slargest = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondlargest(a, n);
    int sSmallest = secondSmallest(a, n);

    return {sLargest, sSmallest};
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> secondOrder = getSecondOrderElements(n, a);
    cout << "Second Largest: " << secondOrder[0] << endl;
    cout << "Second Smallest: " << secondOrder[1] << endl;

    return 0;
}