#include<bits/stdc++.h>
using namespace std;


class A {
public: 
int value;

public: 
void func1(){
    cout<<"class A function 1"<<endl;
}
};



class B: public A {

};

class D {
public: 
int value;

public: 
void func2(){
    cout<<"class D function 2"<<endl;
}
};

class C: public A,public D {

};

int main(){
    C obj;

    obj.func1();
    obj.func2();
    return 0;
}