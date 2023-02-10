#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
class Stack{
    Node* head;
    Node* top;
    int sz = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    void PUSH(int value){
        sz++;
        Node* newNode = new Node(value);
        if(head == NULL){
            head = top = newNode;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
    }
    int TOP(){
        return top->data;
    }
    void POP(){
        Node* delNode = top;
        if(head == top){
            head = top = NULL;
        }
        else{
            top = delNode->prev;
            top->next = NULL;
        }
        delete delNode;
        sz--;

    }
    int isEmpty(){
        if(sz == 0){
            return 1;
        }
        return 0;
    }
    void GetAll(){
        Node *allValue = head;
        while (allValue != NULL){
            cout<<allValue->data<<"  ";
            allValue = allValue->next;
        }
        
    }
};
int main()
{
    Stack st;
    st.PUSH(10);
    st.PUSH(44);
    st.PUSH(100);
    st.GetAll();
    cout<<"\n";
    //cout<<st.TOP()<<"\n";
    //st.POP();
    //cout<<st.TOP();
    //cout<<st.isEmpty();
    while (st.isEmpty() != 1)
    {
       cout<<st.TOP()<<"   ";
       st.POP();
    }
    

}