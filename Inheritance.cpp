#include<iostream>
using namespace std;
class Animal{
   public:
   int age;
   string name;
   void eat(){
    cout<<" Animal is  to be eat"<<endl;
   }
    void bark(){
        cout<<" The Animal is to be bark"<<endl;
    }
};
class Dog:public Animal{

};
int main(){
  Dog d1;
  d1.eat();
  d1.bark();
  cout<<d1.age;
  return 0;
}