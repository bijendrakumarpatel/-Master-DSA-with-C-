#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1{1,2,3,4,5};
    int size1=5;
    vector<int>arr2{3,4,5,6};
    vector<int>ans;
    int size2=4;
    for(int i=0;i<=size1;i++){
        int element=arr1[i];
        for(int j=0;j<size2;j++){
            if(element==arr2[j])
                ans.push_back(element);
            
        }
    }
    for(int i=0;i<=ans.size();i++){
        cout<<ans[i]<<" ";
    }
}