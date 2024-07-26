#include <iostream>

using namespace std;

bool sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isSorted = sorted(arr, n);
    cout << isSorted;
    return 0;
}
