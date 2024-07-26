#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int age = 1;
    string weigth = "1kg";

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human {
    public:
     string color;
    
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Hybrid: public Animal, public Human {

};





int main(){
Hybrid h;
h.bark();
h.speak();
}