#include<bits/stdc++.h>
using namespace std;


class Human {
    public: 
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Human{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};


int main(){

Human h1;
Dog d1;
h1.speak();
d1.speak();
}