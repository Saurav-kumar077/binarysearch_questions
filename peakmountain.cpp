#include <iostream>
using namespace std;
int peakmountain(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid = start +(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start =mid+1;
        }
        else{
            end=mid;
        }
    mid = start +(end-start)/2;

    }
    return start;
}
int main(){
    int arr[4]={3,4,5,1};
    int peak = peakmountain(arr,4);
    cout<<"The index of peak value of this array is "<< peak << endl;
    cout<<"The value at the index is "<<arr[2]<<endl;
}
