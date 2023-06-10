#include <iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    char level;
};
int main(){
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'A';

    cout<<"Ramesh health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;

    return 0;
}