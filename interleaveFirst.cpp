#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void interLeave(queue<int>&q){
         int n=q.size();
         if(q.empty()){
            return ;
         }
         int count=0;
         int k=n/2;
         queue<int>q2;

         while(!q.empty()){
            int temp=q.front();
            q.pop();
            q2.push(temp);
            count++;

            if( count==k){
                break;
            }
         }

         while(!q.empty() && !q2.empty()){
            int first=q2.front();

            q2.pop();
            q.push(first);

            int second=q.front();
            q.pop();
            q.push(second);
         }
         if(n&1){
            int element=q.front();
            q.pop();
            q.push(element);
         }
}

int main() {
    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);

    cout << "Original Queue: ";
    queue<int> temp = q;  
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
       
       interLeave(q);

    cout << "Queue after interleaving  first & second half of the queue  "<<endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
