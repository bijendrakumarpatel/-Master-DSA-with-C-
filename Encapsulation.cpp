#include<iostream>
using namespace std;
class Vechile{
    public:
    int year;
    int  amount;
     void run(){
        cout<<" Vechiles runs very fast"<<endl;
     }
     void buy(){
        cout<<" The amount of the vechile is affordable"<<endl;
     }
     void colour(){
         cout<<" The colour of vechile is red "<<endl;
     }
};
int main(){
  Vechile* car=new Vechile;
  car->run();

}