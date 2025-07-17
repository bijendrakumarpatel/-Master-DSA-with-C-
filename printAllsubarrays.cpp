#include<iostream>
#include<vector>
using namespace std;
void subArrays(vector<int>&arr,int l,int h){
    if(h==arr.size()) return;
 for(int i=l;i<=h;i++){
    cout<<arr[i]<<" ";
 }
    cout<<endl;
    subArrays(arr,l,h+1);
 
}
void print(vector<int>& arr) {
    for (int l = 0; l < arr.size(); l++) {
        subArrays(arr, l, l); 
    }
}

int main(){
 vector<int>arr{1,2,3,4,5,6};
 print(arr);
 return 0;
}