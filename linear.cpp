#include<iostream>
using namespace std;
struct Node
{
public:

    int data ;
    Node* next;




};
   int main ()
{

    Node*head= new Node();
    Node*second=new Node();
    Node*third =new Node();


        // assign data ;
        head->data=10;
        head->next=second;
        second->data=15;
        second->next=third;
        third->data=20;
        third->next=NULL;

        Node* temp=head;
        while (temp !=NULL)
        {
            cout <<temp->data << "->";
            temp=temp->next;
        }
        cout << "NULL";
        return 0;
}










