#include<iostream>
using namespace std;
void digitFind(int n){
    if(n==0) return ;
    int val=n/10;
    digitFind(val);
    int digit=n%10;
    cout<<digit<<endl;
    
}
int main(){
   int n=647;
   //cin>>n;
   digitFind(n);
   return 0;
}