#include<bits/stdc++.h>
using namespace std;


int main() {
    int num = 5;
    int *ptr = &num;
    cout<<num<<endl;


    //address of Operation to check the address of 'num'
    // address of Operation - &

    cout<<"address of num is "<<&num<<endl;
    cout<<"value of num is"<<*ptr<<endl;
    cout<<"address of p is"<<ptr<<endl;

    cout<<"Size of Integer "<<sizeof(num)<<endl;;
    cout<<"size of pointer "<<sizeof(ptr)<<endl;

    double d = 4.2;
    double *ptr2 = &d;

   
    cout<<"Size of Integer "<<sizeof(d)<<endl;;
    cout<<"size of pointer "<<sizeof(ptr2)<<endl;

    return 0;
}