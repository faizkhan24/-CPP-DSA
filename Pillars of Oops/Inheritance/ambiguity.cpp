#include<bits/stdc++.h>
using namespace std;

class A {

    public: 
    void func() {
        cout<<"Hello"<<endl;
    }

};

class B {
public: 
    void func() {
        cout<<"Hello World"<<endl;
    }

};

class C: public A,public B {

};

int main(){
  C obj;
  obj.A::func();
  obj.B::func();

}