#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(i==0){
          return i*(i+1);
          ans.push_back(arr[i]);
        }
        if(i==4){
            return i*(i+1);
            ans.push_back(arr[i]);
        }
        else{
            return i*(i+2);
            ans.push_back(arr[i]);
        }

    }
    for(int i=0;i<arr.size();i++){
        cout<<ans[i]<<" ";
    }

}