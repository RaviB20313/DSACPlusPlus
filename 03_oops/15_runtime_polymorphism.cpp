#include<iostream>
using namespace std;

class Parent{
    public:
    void show(){
        cout<<"Parent class"<<endl;
    }
};
class subclass1:public Parent{
    public:
    void show(){
        cout<<"Subclass 1"<<endl;
    }
};
class subclass2:public Parent{
    public: void show(){
        cout<<"Subclass 2"<<endl;
    }
};

int main(){
    subclass1 o1;
    subclass2 o2;
    o1.show();
    o2.show();
    return 0;
}
