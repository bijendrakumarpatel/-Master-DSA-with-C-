#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,5,6,7,8,10};
      int sub=0;
    for(int i=0;i<arr.size();i+1){
        sub=arr[i+1]-arr[i];
    }
    if(sub==0){
        cout<<" smallest element";
     }
     else {
        cout<<" no found ";
     }
    
}