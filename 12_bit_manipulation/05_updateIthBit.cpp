#include <bits/stdc++.h>
using namespace std;
void updateIthBit(int &n,int i,int v){
    int mask = ~(1<<i);
    n=n&mask;
    mask= v<<i;
    n=n|mask;
    return;
}
int main(){
    int n=5;
    int i;
    cin>>i;
    updateIthBit(n,i,0);
    cout<<n<<endl;

    return 0;
}