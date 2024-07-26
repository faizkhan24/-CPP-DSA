#include<bits/stdc++.h>
using namespace std;

class A {
    public:

    void sayHello() {
        cout<<"Hello my name is Faiz khan"<<endl;
    }
    int sayHello(string name,int n) {
        cout<<"Hello my name is Faiz khan"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};


int main(){

 A obj;

obj.sayHello();

}