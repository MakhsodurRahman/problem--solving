#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *nxt;
    Node *prv;

};
class DoublyLinkedList{
public:
    Node *head;
    int sz;
    DoublyLinkedList(){
        head = NULL;
        sz = 0;
    }

    Node *CreateNewNode(int value){
        Node *newNode = new Node;

        newNode->value = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;
    }

    void InsertIntoHead(int value){

        Node *newNode = CreateNewNode(value);
        sz++;
        if(head == NULL){
            head = newNode;
            return;
        }

        Node *a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void Traverse(){
        Node *a = head;
        while(a != NULL){
            cout<<a->value<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    int getSize(){
        return sz;
    }
    void InsertAtAnyIndex(int index, int value){

        if(index > sz){
            return;
        }
        if(index == 0){
            CreateNewNode(value);
        }

        Node *a = head;
        int cur_index = 0;
        while(cur_index != index -1){
            a = a->nxt;
            cur_index++;
        }

        Node *newNode = CreateNewNode(value);
       // newNode->nxt = a->nxt;
        //a->nxt = newNode;
        //newNode = a->prv;
        newNode->nxt = a->nxt;
        newNode->prv = a;

        Node *b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;


    }

    void DeleteIndex(int index){

        if(index > sz){
            cout<<"index doesn't exits.\n";
            return;
        }
        Node *a = head;
        int cur_index = 0;
        while(cur_index != index){
            a = a->nxt;
            cur_index++;
        }

        Node *b = a->prv;
        Node *c = a->nxt;

        if(b != NULL){
            b->nxt = c;
        }
        if(c != NULL){
            c->prv = b;
        }
        delete a;
        if(index == 0){
            head = c;
        }
        sz--;
    }

    void Reverse()
    {
        if(head == NULL){
            return;
        }
        Node *a = head;
        int cur_index = 0;
        while(cur_index != sz - 1){
            a = a->nxt;
            cur_index++;
        }

        Node *b = head;
        while(b != NULL){
            swap(b->nxt,b->prv);
            b = b->prv;
        }
        head = a;
    }


};
int main()
{
    DoublyLinkedList dl;
    dl.InsertIntoHead(10);
    dl.InsertIntoHead(20);
    dl.InsertIntoHead(30);
    dl.InsertIntoHead(40);
   //dl.InsertAtAnyIndex(2,80);
    dl.Traverse();
    //cout<<dl.getSize();
    //dl.DeleteIndex(2);
    dl.Reverse();
    dl.Traverse();

}
