#include <bits/stdc++.h>
using namespace std;
void updateIthBit(int &n,int i,int v){
    int mask = ~(1<<i);
    n=n&mask;
    mask= v<<i;
    n=n|mask;
    return;
}
void clearlastIBits(int &n,int i){
    int mask=(~0)<<i;
    n=n&mask;
    return;
}
int main(){
    int n=5;
    int i;
    cin>>i;
    clearlastIBits(n,i);
    cout<<n<<endl;

    return 0;
}