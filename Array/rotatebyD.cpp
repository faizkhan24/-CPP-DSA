#include<bits/stdc++.h>
using namespace std;


/**
 * !Brute
*/
// int rotateByD(int arr[],int n,int d){
//     d=d%n;
//     int temp[d];

//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];// temp[1,2,3];
//     }

//     //shifting

//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }

//     //push back temp array

//     for(int i=n-d;i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }


// }


// int main(){
//     cout<<"Enter the number of elements"<<endl;
//     int n;
//     cin>>n;

//     cout<<"Enter the elements"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the D"<<endl;

//     int d;
//     cin>>d;

//     rotateByD(arr,n,d);
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


/**
 * * Optimal
*/

void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    cout<<"Enter the number of element"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the D"<<endl;
    int d;
    cin>>d;

    leftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}

//Right Shift

void rightRotate(int arr[],int n,int d){
    d=n&d;

    int temp[d];

    //Copy the last 'd' elements to temp array

    for(int i=0;i<d;i++){
        temp[i]=arr[n-d+i]; ///temp[1,2,3];
    }

    //shift the remaining elements to the right

    for(int i=n-1;i>=d;i--){
        arr[i] = arr[i-d];
    }

    //Copy the elements from temp array back to original array

    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
}

int main(){
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the D"<<endl;

    int d;
    cin>>d;

        rightRotate(arr,n,d);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
