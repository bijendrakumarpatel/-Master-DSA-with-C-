#include<iostream>
using namespace std;
void lastOccurance(string&s,char x,int i,int&ans){
   if(i>s.size()) return ;
   if(s[i]==x) {
    ans=i;
   }
   lastOccurance(s,x,i+1,ans);
}
int main(){
    string s;
    cout<<" enter a sting "<<endl;
    cin>>s;
    char x;
    cout<<"enter the character "<<endl;
    cin>>x;
    int ans=-1;
    lastOccurance(s,x,0,ans);
    cout<<" answer is "<<ans<<endl;
}