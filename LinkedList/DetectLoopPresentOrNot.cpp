#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
           //loop presnt 
            return true;
        }
    }
    return false;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* four=new Node(40);
    Node* five=new Node(50);
    Node* six=new Node(60);
    Node* seven=new Node(70);
    Node* eight=new Node(80);
    Node* nine=new Node(90);
    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=five;
    // print(head);
    cout<<"Loop is present or not:"<<checkForLoop(head);
    return 0;
}


