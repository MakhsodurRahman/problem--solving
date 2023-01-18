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

    LinkedList()
    {
        head = NULL;
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
};

int main()
{
    LinkedList l;
    l.insertIntoHead(39);
    l.insertIntoHead(3);
    l.insertIntoHead(4);
    l.insertIntoHead(38);


    l.traverse();
    cout<<"\n"<< "  "<<l.searchSistinceValue(40);
    l.searchAllValue(3);


}
