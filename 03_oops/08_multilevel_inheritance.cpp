#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class babyDog: public Dog{
    public:
    void weep(){
    cout<<"Weeping"<<endl;
    }
};
int main(){
    babyDog obj;
    obj.eat();
    obj.bark();
    obj.weep();
    return 0;
}
