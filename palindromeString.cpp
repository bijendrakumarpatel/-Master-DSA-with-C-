#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
/*bool isPallindrome(string&s,int l,int h){
    if(l>=h) return true;
if(s[l]!=s[h]){
    return false;
}
return isPallindrome(s,l+1,h-1);
}
*/
void reverse(string&s,int l,int h){
     if(l>=h) return ;
     swap(s[l],s[h]);
     reverse(s,l++,h--);
    
}
int main(){
    string s="boo";
    reverse(s,0,s.size()-1);
    cout<<s<<endl;
    
   //cout<<isPallindrome(s,0,s.size()-1);


}