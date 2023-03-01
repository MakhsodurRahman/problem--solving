#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int value){

    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void display(Node* head){
    if(head == NULL) return;
    while(head != NULL){
        cout<<head->value<<"  ";
        head = head->next;
    }
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    Node* head = NULL;
    insertAtHead(head,880);
    insertAtHead(head,230);
    insertAtHead(head,3180);
    insertAtHead(head,42);
    display(head);
    a->next = b;
    b->next = c;
    //cout<<a->next->next->value;
    //cout<<head->value<<"    ";
    //cout<<head->next->value;

}
