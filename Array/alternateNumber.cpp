#include <bits/stdc++.h>
using namespace std;

/*
 ! Brute Variety 1
*/

// vector<int> alternativeNumber(vector<int> &arr, int n)
// {

//     vector<int> pos, neg;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             pos.push_back(arr[i]);
//         }
//         else
//         {
//             neg.push_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         arr[i * 2] = pos[i];
//         arr[i * 2 + 1] = neg[i];
//     }
//     return arr;
// }

// int main()
// {
//     vector<int> arr = { 3, 1, -2, -5, 2, -4};

// int n = arr.size();

// vector<int> ans = alternativeNumber(arr, n);

// for (auto it : ans)
// {
//     cout << it << " ";
// }
// }

/*
! Brute Variety 2 in this pos>neg 
*/

// vector<int> alternativeNumber(vector<int> &arr, int n)
// {
//     vector<int> pos, neg;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             pos.push_back(arr[i]);
//         }
//         else
//         {
//             neg.push_back(arr[i]);
//         }
//     }

//     if (pos.size() > neg.size())
//     {
//         for (int i = 0; i < neg.size(); i++)
//         {
//             arr[i * 2] = pos[i];
//             arr[i * 2 + 1] = neg[i];
//         }

//         int index = neg.size() * 2;
//         for (int i = neg.size(); i < pos.size(); i++)
//         {
//             arr[index] = pos[i];
//             index++;
//         }
//     }
//     else{
//          for (int i = 0; i < pos.size(); i++)
//         {
//             arr[i * 2] = pos[i];
//             arr[i * 2 + 1] = neg[i];
//         }
//         int index = pos.size() * 2;
//         for (int i = pos.size(); i < neg.size(); i++)
//         {
//             arr[index] = neg[i];
//             index++;
//         }
//     }
//     return arr;
// }

// int main()
// {
//     vector<int> arr = {1, 2, -4, -5, 3, 6};

//     int n = arr.size();

//     vector<int> ans = alternativeNumber(arr, n);

//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
// }

/**
 * * Optimal in this pos==neg 
*/
vector<int> alternativeNumber(vector<int> &arr,int n){
    int posIndex=0,negIndex=1;
    vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        if(arr[i]>0){
           ans[posIndex] = arr[i];
            posIndex+=2;
        }
        else{
            ans[negIndex] = arr[i];
            negIndex+=2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = { 3, 1, -2, -5, 2, -4};

int n = arr.size();

vector<int> res = alternativeNumber(arr, n);

for (auto it : res)
{
    cout << it << " ";
}
}