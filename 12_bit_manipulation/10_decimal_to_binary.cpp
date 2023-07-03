#include <bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int temp = n&1;
        ans=ans+p*temp;
        p=p*10;
        n=n>>1;
    }
    return ans;
}
int main(){
    int n=5;
    cout<<decimal_to_binary(n)<<endl;
    return 0;
}