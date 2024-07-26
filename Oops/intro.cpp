#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    Hero()
    {
        cout << "Constructor Called" << endl;
        name = new char[100];
    }

    // Parameterized Constructor

    // Hero(int health)
    // {

    //     this->health = health;
    // }

    Hero(int health, char level)
    {
        // this->name = name;
        this->level = level;
        this->health = health;
    }

    // copy constructor

     Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
     void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    static int random(){
        return timeToComplete;
    }





    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(int lvl)
    {
        level = lvl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    // ~Hero(){
    //     cout<<"Destructor bhai called"<<endl;
    // }
};

int Hero::timeToComplete=5;

int main()
{

    // cout<<Hero::timeToComplete<<endl;

    cout<<Hero::random()<<endl;

    // Hero h1;
    // cout<<h1.timeToComplete<<endl;


    // Hero b;

    // b.timeToComplete=10;
    //    cout<<h1.timeToComplete<<endl;
    //    cout<<b.timeToComplete<<endl;















 //static allocation
//  Hero a;

 // dynamic allocation

    // Hero *b = new Hero();
    //manually destructor called
    // delete b;


    return 0;

















    // Hero hero1;
    // char name[7] = "Babbar";
    // hero1.setHealth(99);
    // hero1.setLevel('A');
    // hero1.setName(name);
  
    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();

    // hero1=hero2;
    // hero1.print();
    // hero2.print();
    // Hero S(70,'A');
    // S.print();

    // // copy constructor
    // Hero R(S);
    //   R.print();







    // creation of Object
    //  remesh.Hero(); -> BTS
    // Hero ramesh(10,'B');
    // cout<<"Address of ramesh"<<&ramesh<<endl;
    // ramesh.print();

    // dynamically
    // Hero *h = new Hero(12,'C');
    // h->print();

    // Hero *temp = new Hero(80, 'A');
    // temp->print();






















    // static allocation
    //  Hero a;
    //  a.setLevel('A');
    //  cout<<"level is "<<a.level<<endl;
    //  a.setHealth(80);
    //  cout<<"Health is "<<a.getHealth()<<endl;

    //  // Dynamic Allocation
    //  Hero *b = new Hero;
    //  b->setLevel('A');
    //  b->setHealth(80);
    //  cout<<"level is "<<(*b).level<<endl;
    //  cout<<"Health is "<<(*b).getHealth()<<endl;

    //  cout<<"level is "<<b->level<<endl;
    //  cout<<"Health is "<<b->getHealth()<<endl;

    //  cout<<"Ramesh size :"<<sizeof(ramesh)<<endl;

    // ramesh.setHealth(70);
    // ramesh.setLevel('A');

    //  cout<<"Health :"<<ramesh.getHealth()<<endl;
    //  cout<<"Level :"<<ramesh.getLevel()<<endl;
}