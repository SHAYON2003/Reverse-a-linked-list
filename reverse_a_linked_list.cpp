#include<iostream>
using namespace std;


class Node{
     public:
      int data;
      Node* next;

      Node(int data){
         this->data = data;
         this->next = NULL;
      }
};


Node* reverse(Node* &prev, Node* &curr){
      
      //base case 
      if(curr == NULL){
        return prev;
      }

   Node* forward = curr->next;
   curr->next = prev;
    
    prev = curr;
     curr = forward;

     reverse(prev,curr);

}








void printll(Node* &head){
     Node* temp = head;
     while(temp != NULL){
         cout<<temp->data<<endl;
         temp = temp->next;
     }
     
}




int main(){
      Node * first = new Node(10);
      Node * second = new Node(20);
       Node * third = new Node(30);
       Node * fourth = new Node(40);
        Node * fifth = new Node(50);

         first->next = second;
        second->next = third;
         third->next = fourth;
        fourth->next = fifth;
   
        Node* prev = NULL;
        Node* curr = first;


  first = reverse(prev,curr);
 printll(first);
}