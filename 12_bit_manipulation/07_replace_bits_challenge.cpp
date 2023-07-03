// You are given two 32-bit number ,N and M,and two bit position i and j.
// Write a method to set all bits between i and j in N equal to M.
// M(becomes a substring of N locationed at and starting at j)



#include <iostream>
using namespace std;
//j>i
void clearBitInRange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
    return;
}
void replaceBits(int &n,int i,int j,int m){
    clearBitInRange(n,i,j);
    int mask=(m<<i);
    n=n|mask;
    return;
}

int main(){
    int n=15;
    int i=1;
    int j=3;
    int m=2;
    replaceBits(n,i,j,m);
    cout<<n<<endl;
    return 0;
}