//The process of grouping data member and corresponding methods into a single unit is known as encapsulation.

#include <iostream>
using namespace std;
class Student{
    private:
    string studentname;
    int studentRollno;
    int studentAge;

    public:
    string getstudentName(){
        return studentname;
    }
    void setStudentName(string studentname){
        this->studentname=studentname;
    }
    int getstudentRollno(){
        return studentRollno;
    }
    void setStudentRollno(int studentRollno){
        this->studentRollno=studentRollno;
    }
    int getstudentAge(){
        return studentAge;
    }
    void setStudentAge(int studentAge){
        this->studentAge=studentAge;
    }

};
int main(){
    Student obj;
    obj.setStudentName("Ravi Ranjan");
    obj.setStudentRollno(20313);
    obj.setStudentAge(21);

    cout<<"Student Name : "<<obj.getstudentName()<<endl;
    cout<<"Student Roll no : "<<obj.getstudentRollno()<<endl;
    cout<<"Student Age : "<<obj.getstudentAge()<<endl;
    return 0;
}