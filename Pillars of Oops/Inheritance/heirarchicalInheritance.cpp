#include<bits/stdc++.h>
using namespace std;

class Parent {
    public:
    string color;

    public: 
    void fathereyes(){
        cout<<"Matching"<<endl;
    }
    void fatherHeight(){
        cout<<"Matching"<<endl;
    }


};

class Child1: public Parent {

};

class Child2: public Parent {

};

int main(){

    Child1 obj1;
    obj1.fathereyes();

    Child2 obj2;
    obj2.fatherHeight();



}