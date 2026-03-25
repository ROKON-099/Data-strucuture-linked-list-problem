#include<iostream>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;



};



int main ()
{

    Node* head=NULL;

    // create new node
    Node*first=new Node();
    Node*second=new Node();
    Node*third=new Node();

    first->data=10;
    first->next=second;

    second->data=15;
    second->next=third;

    third->data=20;
    third->next=NULL;
    head=first;

    Node*newNode=new Node();
    newNode->data=5;
    newNode->next=head;
    head=newNode;


    Node* temp=head;
    while (temp !=NULL)
    {
        cout << temp->data << "->";
        temp=temp->next;

    }
    cout <<"NULL";
    return 0;







}

