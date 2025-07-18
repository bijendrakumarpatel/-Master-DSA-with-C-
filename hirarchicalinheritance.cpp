#include<iostream>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    string name;
    void SpeedUp(){
        cout<<" speeding up"<<endl;
    }
};
class Scorpio:public Car{

};
class Fortunor:public Car{

};
int main(){
   Scorpio s1;
   s1.SpeedUp();
   Fortunor f1;
   f1.SpeedUp();
}