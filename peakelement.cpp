#include<iostream>
using namespace std;
void peakElement(int arr[],int size){
 for(int i=1;i<size-1;i+1){
     if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
        cout<<arr[i]<<" ";
     }
 }
}
int main(){
    int arr[5]={10,5,20,15,1};
        int size=5;
peakElement(arr,5);
}