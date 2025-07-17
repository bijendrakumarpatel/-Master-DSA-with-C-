#include<iostream>
using namespace std;
int getmax(int arr[3][3],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
            max=arr[i][j];
            }
        }
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {3,4,5},
        {6,7,8}
    };
    cout<<max<<" "<<endl;
}