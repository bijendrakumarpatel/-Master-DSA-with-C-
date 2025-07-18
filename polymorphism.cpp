#include<iostream>
using namespace std;
class Math{
    public:
  int sum(int a,int b){
    return a+b;
  } 
  int sum(int a,int b,int c){
    return a+b+c;
  }
};
int main(){
 Math m1;
 cout<<m1.sum(2,3)<<" "<<endl;
}