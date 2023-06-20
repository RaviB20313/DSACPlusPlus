#include <iostream>
using namespace std;
//binary_search TC O(logn)
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}
int main(){

    return 0;
}