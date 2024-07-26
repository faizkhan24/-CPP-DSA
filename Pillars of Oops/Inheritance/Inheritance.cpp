#include<bits/stdc++.h>
using namespace std;


class Human {
    public:
    string name="mirza";
    int age=18;
    int weight;
    int height;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;
    }
    int getWeight() {
        return this->weight; 
    }
};

class Male : protected Human {
public: 
string color="brown";

void sleep(){
    cout<<"Male Sleeping";
}

int getHeigth(){
    return this->height;
}
};

int main(){

Male obj1;
cout<<obj1.getHeigth()<<endl;


// cout<<obj1.getAge()<<endl;
// cout<<obj1.name<<endl;
// obj1.setWeight(52);
// cout<<obj1.getWeight()<<endl;
// cout<<obj1.color<<endl;
// obj1.sleep();



}