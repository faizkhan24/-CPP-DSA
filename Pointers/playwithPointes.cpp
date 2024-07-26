#include <bits/stdc++.h>
using namespace std;

int main()
{

    // pointer to int is created, and pointing to some garbage address

    // int *p=0;
    // cout<<*p;

    int i = 5;
    int *ptr1 = &i;

    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    int *ptr2 = 0;
    ptr2 = &i;

    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    int num = 10;

    int a = num;
    cout << "before :" << num << endl;
    a++;
    cout << "after :" << num << endl;

    int *p = &num;
    cout << "before :" << num << endl;
    (*p)++;
    cout << "after :" << num << endl;

    // copying a pointer

    int *q = p;

    cout << p << " - " << q << endl;   // address print
    cout << *p << " - " << *q << endl; // value print

    int n = 100;
    int *ptr3 = &n;
    cout << "value of n " << n << endl;

    cout << "ptr3 value " << *ptr3 << endl;
    cout << "ptr3 address " << ptr3 << endl;

    int *ptr4 = ptr3; // copying address of ptr3
    (*ptr4)++;

    cout << "ptr3 address " << ptr3 << endl;
    cout << "ptr4 address " << ptr4 << endl;

    cout << "ptr3 value " << *ptr3 << endl;
    cout << "ptr4 value " << *ptr4 << endl;

    // important points

    int val = 3;
    int *ptr5 = &val;
    *ptr5 = *ptr5 + 1;
    cout << *ptr5 << endl;

    // cout << ptr5 << endl;
    // ptr5++;
    // cout << ptr5 << endl;

    ptr5 = ptr5-1;
    cout<<ptr5;
}