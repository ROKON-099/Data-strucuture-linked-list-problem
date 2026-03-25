
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main ()
{

    Node* head = NULL;


    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    first->next = second;

    second->data = 15;
    second->next = third;

    third->data = 25;
    third->next = NULL;


    head = first;


    Node* newNode = new Node();
    newNode->data = 40;
    newNode->next = NULL;


    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;


    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
