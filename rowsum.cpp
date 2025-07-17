#include<iostream>
using namespace std;
 // key element  
 bool findkey(int arr[][3],int row,int col,int key){
   for(int i=0;i<3;i++){ 
    int key=12;
    for(int j=0;j<3;j++){
        if(arr[i][j]==key){
            return true;
        }
    }
   }
   return false;
 }
// row sum
void rowsum(int arr[][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {2,3,4},
        {4,5,6}
    };
    for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
    cout<<arr[i][j]<<" ";
 }
 cout<<endl;
}   // row sum 
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
cout<<endl;
int key=4;
cout<<findkey(arr,3,3,key);
}