//getter and setter 
#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    char level;

    public:
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char l){
        level = l;
    }

};
int main(){
    //static allocation
    Hero ramesh;
    ramesh.sethealth(70);
    ramesh.setlevel('A');

    cout<<"Ramesh health is: "<<ramesh.gethealth()<<endl;
    cout<<"Level is: "<<ramesh.getlevel()<<endl;
    //dynamically

    Hero *b= new Hero;
    cout <<"health is"<<(*b).gethealth()<<endl;
    cout <<"level is"<<(*b).getlevel()<<endl;
    

    return 0;
}

