#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *nxt;
};

class LinkedList{
public:
    Node *head;
    LinkedList(){
        head = NULL;
        int sz = 0;
    }

    Node *CreateNewNode(int value){
        Node *newNode = new Node;
        newNode->value = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void InsertIntoHead(int value){
        Node *a = CreateNewNode(value);

        if(head == NULL){
            head = a;
            return;
        }
        else{
            a->nxt = head;
            head = a;
        }
    }

    void Traverse(){
        Node *a = head;
        while(a != NULL){
            cout<<a->value<<"  ";
            a = a->nxt;
        }
    }

    int SerarchDistnceValue(int value){
        Node *a = head;
        int index = 0;
        while(a != NULL){
            if(a->value == value){
                return index;
            }
            a = a->nxt;
            index++;
        }
        return index;
    }

    void SearchAllValue(int value){
        Node *a = head;
        int index = 0;
        while(a != NULL){
            if(a->value == value){
                cout<<"value is "<<value<<" position is "<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }
    int getSize(){
        Node *a = head;
        int sz = 0;
        while(a != NULL){
            sz++;
            a = a->nxt;
        }
        return sz;
    }
    void InsertAtAnyIndex(int index, int value){
        if(index < 0){
            return;
        }
        if(index == 0){
            CreateNewNode(value);
            return;
        }
        Node *a = head;
        int cur_index = 0;

        while(cur_index != index - 1){
            a = a->nxt;
            cur_index++;
        }
        Node *newNode = CreateNewNode(value);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }

    void DeleteAtHead(){
        if(head == NULL){
            return;
        }
        Node *a = head;
        head = a->nxt;
        delete a;

    }

    void InsertAfterValue(int value, int data){
        Node *a = head;
        while(a != NULL){
            if(a->value == value){
                break;
            }
            a = a->nxt;
        }
        if(a == NULL){
            cout<<"value not exits";
        }
        Node *newNode = CreateNewNode(data);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }
};
int main()
{
    LinkedList l;
    l.InsertIntoHead(10);
    l.InsertIntoHead(20);
    l.InsertIntoHead(30);
    l.InsertIntoHead(40);
    l.InsertIntoHead(50);
    l.InsertIntoHead(70);
    l.Traverse();
    //cout<<"\n"<<l.SerarchDistnceValue(10)<<endl;
    //l.SearchAllValue(50);
    //cout<<l.getSize();
    //l.InsertAtAnyIndex(3,60);
    cout<<endl;
    //l.DeleteAtHead();
    l.InsertAfterValue(30,800);
    l.Traverse();
}
