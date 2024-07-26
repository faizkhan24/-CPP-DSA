#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // // creating 2d dynamic array
    // int **arr = new int *[n];

    // for(int i=0;i<n;i++){
    //     arr[i] = new int [n];
    // }

    // // taking input

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }

    // taking input of row and col

    // int row;
    // int col;
    // cin >> row >> col;

    // int **arr = new int *[row];

    // for (int i = 0; i < row; i++)
    // {
    //     arr[i] = new int[col];
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // cout<<endl;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<row;i++){
    //     delete []arr[i];
    // }

    //  delete []arr;

    // jaggered array
int row = 3;
    int col;  // col needs to be initialized based on sizes[i]
    int **arr = new int *[row];
    int sizes[] = {4, 2, 3};

    for (int i = 0; i < row; i++) {
        col = sizes[i]; // Initialize col based on sizes[i]
        arr[i] = new int[col];
    }

    int num = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) { // Fixed typo: j < sizes[i] instead of i < sizes[i]
            arr[i][j] = num++;
        }
    }

    cout << "Elements in matrix form as follows:" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;

}