
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    // Node(int value)
    // {
    //     data = value;
    //     next=NULL;
    // }
    Node(int value) : data(value),next(NULL) {}

};
void printlinked(Node* head)
{
   Node*temp = head;
   while(temp != NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}



int main (){
Node* first = new Node( 5);
Node* second = new Node(6);
Node* third = new Node(7);
//Node* third = new Node(8); 
//Node* third = new Node(9); 
//Node* third = new Node(10); 

first->next=second;
second->next=third;
third->next = NULL;
printlinked(first);


return 0;



}