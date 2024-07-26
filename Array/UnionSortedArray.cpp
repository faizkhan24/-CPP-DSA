#include<bits/stdc++.h>
using namespace std;

// vector<int> unionArray(int arr1[],int arr2[],int n1,int n2){
//     set<int> st;
//     for(int i=0;i<n1;i++){
//         st.insert(arr1[i]);
//     }

//     for(int i=0;i<n2;i++){
//         st.insert(arr2[i]);
//     }

    

//     vector<int> result;

//     for(auto it : st){
//         result.push_back(it);
//     }

//     return result;


// }

vector<int> unionArray(int arr1[], int arr2[], int n1, int n2) {
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) 
                unionArr.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (unionArr.empty() || unionArr.back() != arr2[j]) 
                unionArr.push_back(arr2[j]);
            j++;
        } else {
            if (unionArr.empty() || unionArr.back() != arr1[i]) 
                unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) 
            unionArr.push_back(arr1[i]);
        i++;
    }
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) 
            unionArr.push_back(arr2[j]);
        j++;
    }
    return unionArr;
}

int main() {
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 4, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = unionArray(arr1, arr2, n1, n2);

    cout << "Union of the arrays: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}