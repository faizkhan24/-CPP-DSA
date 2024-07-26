#include <bits/stdc++.h>
using namespace std;

// void selectionSort(int arr[], int n)
// {

//     for (int i = 0; i <= n - 2; i++)
//     {
//         int miniIndex = i;
//         for (int j = i; j <= n - 1; j++)
//         {
//             if (arr[j] < arr[miniIndex])
//             {
//                 miniIndex = j;
//             }
//         }
//         swap(arr[i], arr[miniIndex]);
//     }
// }

// int main()
// {
//     int arr[] = {5, 4, 3, 2, 1};
//     int n = 5;
//     selectionSort(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//using recursion

void selectionSort(int arr[], int i, int n) {
    if (i >= n - 1) return;

    int mini = i;

    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[mini]) {
            mini = j;
        }
    }

    swap(arr[i], arr[mini]);

    selectionSort(arr, i + 1, n);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using selection Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, 0, n);
    cout << "After Using selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}