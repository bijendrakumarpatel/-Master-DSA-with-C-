#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    solve(s,target);
    s.push(topElement);
}
void insertAtBottom(stack<int> &s){
    if(s.empty()){
        cout<<" stack is empty can't insert At bottom";
        return;
    }
    int target =s.top();
    s.pop();
    solve(s,target);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

  insertAtBottom(s);
  
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   
   cout<<endl;
}