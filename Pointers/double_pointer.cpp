#include<bits/stdc++.h>

using namespace std;

int update(int **ptr2){
    // ptr2 = ptr2+1; // No change

    // *ptr2 = *ptr2+1; //change Yes

    // **ptr2 = **ptr2+1; // yes change 


}

int main() {
    int i =5;
    int *ptr1 = &i;
      int **ptr2 = &ptr1;

    cout<<i<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

      update(ptr2);
    cout<<i<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    //   cout<<&i<<endl; //address of i 
    // cout<<ptr1<<endl; // address of i
    // cout<<*ptr2<<endl; // address of i

    // // printing the value of i

    // //way 1 
    // cout<<i<<endl;
    // //way 2
    // cout<<*ptr1<<endl;
    // //way 3
    // cout<<**ptr2<<endl;

    // cout<<&ptr1<<endl;
    // cout<<ptr2<<endl;


}