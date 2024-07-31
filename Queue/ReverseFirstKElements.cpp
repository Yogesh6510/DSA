#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversek(queue<int> &q,int k){
    stack<int>st;
    int n=q.size();
  int count=0;
  while(!q.empty()){
    int temp=q.front();
    q.pop();
    st.push(temp);
    count++;
    if(count==k){
          break;
    }
  }
  //stack->queue
  while(!st.empty()){
     int temp=st.top();
     st.pop();
     q.push(temp);
  }
  count=0;
  while(!q.empty()){
   int temp=q.front();
   q.pop();
   q.push(temp);
   count++; 
   if(count==n-k){
    break;
   }
  }
 

}
int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    reversek(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}