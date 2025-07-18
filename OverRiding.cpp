
#include<iostream>
using namespace std;
class Animal{
    public:
virtual void speak(){
        cout<<" the Animal is to speak"<<endl;
    }
};
class Dog :public Animal{
    public:
      void  speak(){
        cout<<" The dog is to be bark"<<endl;
      } 
};
int main(){
  Animal obj;
  obj.speak();
  // upcasting 
Animal*a=new Dog();
a->speak();
 // downcasting 
 // Dog*b=new Animal();
 // b->speak();
}