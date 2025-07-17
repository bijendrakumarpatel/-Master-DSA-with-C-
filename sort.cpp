#include<iostream>
using namespace std;
void insertionesort(int arr[]){
    int temp;
 for(int i=0;i<7;i++){
       for(int j=i-2;j<7;j++){
        if(arr[j]>arr[j+1]){
             temp=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
        }
       }
    }
}
void bubblesort(int arr[]){
    int temp;
 for(int i=0;i<7;i++){
       for(int j=i+1;j<7;j++){
        if(arr[j]<arr[i]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
       }
    }
}
int main(){
    int arr[7]={1,4,2,0,7,9,10};
  //  bubblesort(arr);
    insertionesort(arr);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" "<<endl;
    }
}