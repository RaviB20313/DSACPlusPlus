#include <iostream>
using namespace std;

bool odd(int num){
    if(num&1){
        return true;
    }else{
        return false;
    }
}
int main(){
    int x;
    cin>>x;
    if(odd(x)){
        cout<<"ODD Number"<<endl;
    }else{
        cout<<"EVEN Number"<<endl;
    }
    return 0;
}