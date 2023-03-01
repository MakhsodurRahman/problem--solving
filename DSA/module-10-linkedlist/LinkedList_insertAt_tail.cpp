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

void insertAtTail(Node*& head, int value){

    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp-> next;
    }
    temp->next = newNode;
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
    Node* head = NULL;
    insertAtTail(head,88);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,43);
    display(head);


}

