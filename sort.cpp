#include<iostream>
using namespace std;

void sorted(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
     int arr[]={5,6,8,2,1,0,9,3,4};
   int n=sizeof(arr)/sizeof(arr[0]);
    sorted(arr ,n);
}