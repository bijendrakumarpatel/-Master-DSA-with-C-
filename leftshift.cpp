#include<iostream>
using namespace std;
int main(){
    int arr[6]={ 1,2,3,4,5,6};
    int n=6;
    int temp=arr[0];
  for(int i=0;i<n-1;i++){;
  arr[i]=arr[i+1];
   
  }
  arr[n-1]=temp;
 for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }
}
   