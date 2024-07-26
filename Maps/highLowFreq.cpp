#include<bits/stdc++.h>
#include <vector>
#include <map>
#include <climits>
using namespace std;

// pair<int, int> countFreq(int arr[], int n) {
//     vector<bool> visited(n,false);
//     int minfreq = n, maxfreq = 0, minEle = 0, maxEle = 0;

//     for(int i = 0; i < n; i++) {
//         if(visited[i] == true) {
//             continue;
//         }

//         //count freq
//         int count = 1;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }

//         if(count > maxfreq) {
//             maxEle = arr[i];
//             maxfreq = count;
//         }

//         if(count < minfreq) {
//             minEle = arr[i];
//             minfreq = count;
//         }
//     }
//     return make_pair(minEle, maxEle);
// }

// int main() {
//     int arr[] = {10, 5, 10, 15, 10, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     pair<int, int> result = countFreq(arr, n);
//     cout << "Minimum Element: " << result.first << endl;
//     cout << "Maximum Element: " << result.second << endl;
//     return 0;
// }


//using unordered map


vector<int> getFrequencies(vector<int> &v) {
    map<int, int> mpp;

    // Count frequencies
    for (int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int maxFreqElement = 0;
    int minFreqElement = 0;

    // Find element with maximum and minimum frequencies
    for (auto it : mpp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxFreqElement = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minFreqElement = it.first;
        }
    }

    // Construct and return the result vector
    vector<int> result;
    result.push_back(maxFreqElement);
    result.push_back(minFreqElement);
    return result;
}