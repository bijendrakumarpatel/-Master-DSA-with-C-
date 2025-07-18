#include<iostream>
using namespace std;

class CQueue{
    public:
      int *arr;
      int size;
      int front ;
      int rear;

      CQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
      }

    void push(int data ){
        if(front==0  &&  rear==size-1){
            cout<<" Q is full "<<endl;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front==0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void pop(){
        if(front==-1){
            cout<<" Queue is empty "<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
};

int main(){
 cout <<" circular Queue "<<endl;
  CQueue q(10);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  while(!q.empty()){
        cout<<q.front()<<" ";
          q.pop();
   }
   cout<<endl;
  
}