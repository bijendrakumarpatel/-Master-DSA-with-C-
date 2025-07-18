#include<iostream>
using namespace std;
class Animal{
    private:
       int weight;
    public:
    int age;
    string name;
    void sleep(){
       cout<<" sleeping"<<endl;
    }
    void eat(){
       cout<<"Eating"<<endl;
    }
    int getweight(){
        return weight;
    }
    void setweight(int w){
        weight=w;
    }
};
int main(){ 
    Animal *anm1=new Animal;
    (*anm1).age=40;
    (*anm1).name="cat";
    anm1->eat();
    anm1->sleep();
    Animal anm;
    anm.age=12;
    anm.name="bull dog";
 cout<<" class name "<<endl;
 cout<<" name of animal is  " <<anm.name<<endl;
 cout<<" Age of animal is  " <<anm.age<<endl;
 anm.sleep();
 anm.eat();
 anm.setweight(12);
cout<<"weight of animal is "<<anm.getweight()<<endl;

  return 0;
}