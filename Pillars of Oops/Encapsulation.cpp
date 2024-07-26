#include<bits/stdc++.h>
using namespace std;

// making data member and functions as private is called encapsulation 

class Student {
    private:
    string name= "Afzal";
    int age=22;

    public:
    int getAge(){
        return this->age;
    }
    string getName(){
        return this->name;
    }

    void setAge(int age){
        this->age = age;
    }
    void setName(string name){
        this->name = name;
    }
};


int main() {


Student first;
first.setName("Faiz");
first.setAge(21);
cout<<first.getAge()<<endl;
cout<<first.getName()<<endl;

}