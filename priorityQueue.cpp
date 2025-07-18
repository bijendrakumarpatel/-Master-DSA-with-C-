#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap create 

  //  priority_queue<int ,vector<int> , greater<int>> pq;
  
  // min heap create 
      priority_queue<int>pq;
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.push(8);
    pq.push(9);
    pq.push(10);

    cout<<" Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<" size of queue "<<pq.size()<<endl;
   // pq.pop();
    cout<<" Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<" Top element "<<pq.top()<<endl;
    cout<<" size of queue "<<pq.size()<<endl;

}