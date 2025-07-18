#include<iostream>
using namespace std;
void reverseString(string&s,int l,int h){
    if(l>=h) return;
    swap(s[l],s[h]);
    reverseString(s,l+1,h-1);
}
int main(){
    string s={"good"};
  cout<<" Enter a string "<<endl;
  //cin>>s;
  reverseString(s,0,s.size()-1);
  cout<<s<<endl;
  return 0;
}