#include<bits/stdc++.h>
#include <string> // for std::string
using namespace std;

/**
 * !Brute
*/

/**
 * !string twoSum(int arr[], int n, int target) {
 * !   for (int i = 0; i < n; i++) {
 * !       for (int j = i + 1; j < n; j++) {
 * !           if (arr[i] + arr[j] == target) {
 * !               return "YES";
 * !           }
 * !       }
 * !   }

 * !   return "NO";
}
int main() {
    int arr[] = {2, 5, 6, 8, 11};
    int target = 14;

    int n = sizeof(arr) / sizeof(arr[0]);

    string result = twoSum(arr, n, target);
    cout << result;

    return 0;
}
*/




/**
 * ? Better
*/

/**
 * ? vector<int> twoSum(vector<int> &nums, int target) {
 * ?   map<int, int> mpp;
 * ?   for (int i = 0; i < nums.size(); i++) {
 * ?       int num = nums[i];
 * ?       int moreNeeded = target - num;

 * ?       if (mpp.find(moreNeeded) != mpp.end()) {
 * ?           return { mpp[moreNeeded], i };
        }

 * ?       mpp[num] = i;
    }

 * ?   return { -1, -1 };
}
*/




// int main() {
//     vector<int> arr = { 2, 6,5,8,11 };
//     int target = 14;
//     vector<int> result = twoSum(arr, target);
//     cout << result[0] << " " << result[1] << endl;
//     return 0;
// }



/**
 * * Optimal
*/

string twoSum(vector<int> arr, int n, int target) {

    int left = 0;
    int right = n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum = arr[left]+arr[right];

        if(sum==target){
            return "YES";
        }
        else if (sum<target) left++;
        else right--;
    }

    return "NO";
   
}

int main() {
    vector<int> arr = {2, 5, 6, 8, 11};
    int target = 14;

    int n = arr.size();

    string result = twoSum(arr, n, target);
    cout << result;

    return 0;
}