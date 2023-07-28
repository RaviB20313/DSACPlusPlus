#include <bits/stdc++.h>
using namespace std;
//a^n
int fastExpo(int a,int n){
    int ans=1;
    while(n>0){
        int lastbit=(n&1);
        if(lastbit){
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;
    }
    return ans;
}
int main(){
    int a=2;
    int n=5;
    cout<<fastExpo(a,n)<<endl;

    return 0;
}