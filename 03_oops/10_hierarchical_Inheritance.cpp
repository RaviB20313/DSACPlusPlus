#include <iostream>
using namespace std;
//Parent class
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
//child class
class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Cat:public Animal{
    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};
int main(){
    Cat obj;
    obj.eat();
    obj.meow();

    Dog obj2;
    obj2.eat();
    obj2.bark();
}