#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;

}
int main(){
    int arr[4]={10,17,3,8};
    int found=pivot(arr,4);
    cout<<"The index of pivot element in this array is "<<found<<endl;
    cout<<"The value of the pivot is"<<arr[found]<<endl;
}
