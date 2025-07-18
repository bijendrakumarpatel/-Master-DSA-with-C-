#include<iostrem>
using namespace std;

class Stack{
  
    public:
       int *arr;
       int size;
       int top1=-1;
       int top2=size;

       Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = size/2+1;
        top2 = size/2;
    }

    void Pushtop1(int data){
        if(top1>0){
            top1--;
            arr[top]=data;
        }
        else{
            cout <<"Stack is overflow "<<endl;
        }
    }
    void Pushtop2(int data){
        if(top2<=size-1){
            top2++;
            arr[top2]=data;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    int pop1() 
    { 
        if (top1 <= size / 2) { 
            int data = arr[top1]; 
            top1++; 
            return data; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
    int pop1() 
    { 
        if (top1 <= (size / 2 )+1) { 
            int data = arr[top1]; 
            top1++; 
            return data; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
  
};

int main(){

}