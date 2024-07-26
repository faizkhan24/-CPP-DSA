#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal {
public:
  string voice = "Meow";
};

class Cat : public Dog{

};

int main(){
    Dog d;

    d.speak();
    cout<<d.age<<endl;

    Cat c;
    cout<<c.voice<<endl;
}