#include <iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int Binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={6, 7 ,1 ,2 ,3, 4 };
    int getpivot=pivot(arr,6);
    int found=Binarysearch(arr,6,4);
    cout<<"The pivot element at the index is "<<getpivot<<endl;
    cout<<"The searching element in this rotated array at this index is "<<found<<endl;
}