#include <iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    char level;
    //constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    //Parameterised Constructor
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }
    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
    }
    //copy constructer
    Hero(Hero & temp){
        cout<<"Copy constructor is called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //destructor
    ~Hero(){
        cout<<"destructor is called"<<endl;
    }

    

};
int main(){
    // Hero ramesh;
    // ramesh.health = 70;
    // ramesh.level = 'A';

    // cout<<"Ramesh health is: "<<ramesh.health<<endl;
    // cout<<"Level is: "<<ramesh.level<<endl;


    //copy constructor
    Hero Suresh(70,'C');
    Hero ritesh(Suresh);

    ritesh.print();

    return 0;
}