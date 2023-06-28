//shallow and deep copy
//The assignment operator and the default copy constructor make a shallow copy.

#include <iostream>
using namespace std;

class box{
    public:
    int length;
    int breadth;
    int height;

    public:
    void set_values(int a,int b,int c){
        length= a;
        breadth=b;
        height = c;

    }
    void show_data(){
        cout<<"length: "<<length<<" ,"<<"Breadth: "<<breadth<<" ,"<<"height: "<<height<<endl;
    }
};

int main(){
    box B1;
    B1. set_values(5,10,15);
   

    box B2=B1;
    box B3(B1);

    cout<<"B1"<<" ";
    B1.show_data();
    cout<<endl;
    cout<<"B2"<<" ";
    B2.show_data();
    cout<<endl;
    cout<<"B3"<<" ";
    B3.show_data();
    cout<<endl;
    return 0;
}