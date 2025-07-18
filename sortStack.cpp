#include<iostream>
#include<stack>
using namespace std;
void insertsorted(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertsorted(s,target);
    s.push(topelement);
}
void sorstack(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int topelement=s.top();
    s.pop();
    sorstack(s);
    insertsorted(s,topelement);
}
int main(){
 stack<int>s;
 s.push(3);
 s.push(1);
 s.push(2);
 s.push(1);
 s.push(5);
   
   sorstack(s);
   cout<<" printing ";
 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
}