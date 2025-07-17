#include<iostream>
#include<limits.h>
using namespace std;
int main(){ 
 // Extreme number print 

//  maximux number 
int max=INT_MIN;
int min=INT_MAX;
int arr[10]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<=10;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"maxium number is"<<max<<endl;
for(int i=0;i<=10;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<"Minimum  number is "<<min<<endl;
/*
    // search the specific element 
    int arr[]={1,1,1,1,1,1,3,4,5,6};
    int search=6;
    int count=0;
    for(int i=0;i<=10;i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout<<" numbers of 1 is"<<count<<endl;
    // linear search 
   bool flag=0;
    for(int i=0;i<=5;i++){
        if(arr[i]==search){
            cout<<" search element will be found ";
            flag=1;
        }
    }
    if(flag)
       cout<<"present"<<endl;
    else
      cout<<"Absent"<<endl;
    */
   // cout<<"print the array element ";
    //for(int i=0;i<=5;i++){
      //  cout<<arr[i]<<" ";
   // }
    //int a;
    //cin>>a;
}