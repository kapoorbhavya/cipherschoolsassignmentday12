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
void insertatend(Node* head,int val){
    Node*newnode=new Node(val);
    if(head==nullptr){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=nullptr;
    Node* firstnode=new Node(10);
    Node* secondNode=new Node(20);
    Node* thirdNode=new Node(30);
    firstnode->next=secondNode;
    secondNode->next=thirdNode;
    head=firstnode;
    insertatend(head,40);
    display(head);

}