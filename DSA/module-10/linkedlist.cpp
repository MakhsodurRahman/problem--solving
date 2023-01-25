#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node * nxt;
};

class LinkedList{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node* createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void insertIntoHead(int value)
    {
        sz++;
        node *a = createNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }
        else{
            a->nxt = head;
            head = a;
        }

    }
    void traverse()
    {
        node* a = head;
        while(a!= NULL){
            cout<< a->data<<" ";
            a = a->nxt;
        }
    }

    int searchSistinceValue(int value){
        node* a = head;
        int index = 0;
        while(a!=NULL){

            if(a->data == value){
                return index;
            }
            a = a->nxt;
            index++;
        }
        return - 1;
    }
    void searchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL){

            if(a->data == value){
                cout<<"value is found "<<index<<"  ";
            }
            a = a->nxt;
            index++;
        }

    }
    int getSize(){
    /*
        this code work on o(n)
        node *a = head;
        int index = 0;
        while(a != NULL){
            index++;
            a =  a->nxt;
        }
        */
        return sz;
    }

    void InsertAtAnyIndex(int index,int value){

        if(index < 0 || index > sz){
            return;
        }
        if(index == 0){
            insertIntoHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index -1){

            a = a->nxt;
            cur_index++;
            cout<<"helo"<<"\n";
        }

        node *newNode = createNewNode(value);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }
};

int main()
{
    LinkedList l;
    l.insertIntoHead(39);
    l.insertIntoHead(3);
    l.insertIntoHead(4);
    l.insertIntoHead(38);

    l.InsertAtAnyIndex(2,34545);
    l.traverse();
    cout<<"\n"<< "  "<<l.searchSistinceValue(40)<<"\n";
    l.searchAllValue(3);

    cout<<"\n"<<"size of linkedlist "<<l.getSize();


}
