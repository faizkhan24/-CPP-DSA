#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }

    int last = fib(n-1);
    int slast = fib(n-2);

    return last+slast;
}

void print(int n){
    for(int i=0;i<n;i++){
        cout<<fib(i);
    }
}

int main() {
    int n=5;
    print(n);
}

// int main()
// {
//     int a = 0, b = 1, c;
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         c = a + b;
//         cout << a;
//         a = b;
//         b = c;
//     }
// }