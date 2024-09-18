#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next=NULL;
    }
};
int main(){
    int n;
    Node* head= nullptr;
    while(n>=0){
        cin>>n;
        Node* newnode= new Node(n);
        if(head==nullptr){
            head=newnode;
        }
        else{
            Node*temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

    }
    Node*help=head;
    while(help->next!=nullptr){
        cout<<help->data<<"->";
        help=help->next;
    }
    cout<<"NULL";
}