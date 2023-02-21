#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
public:
    T data;
    Node* next;
    Node* prev;
    Node(T value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
template<class T>
class Stack{
    Node<T>* head;
    Node<T>* top;
    int sz = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    void PUSH(T value){
        sz++;
        Node<T> *newNode = new Node<T>(value);
        if(head == NULL){
            head = top = newNode;//head = top; head = newNode;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
    }
    T TOP(){
        return top->data;
    }
    void POP(){
        Node<T>* delNode = top;
        if(head == top){
            head = top = NULL;//head = null, top = null
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
        Node<T> *allValue = head;
        while (allValue != NULL){
            cout<<allValue->data<<"  ";
            allValue = allValue->next;
        }

    }
    int stackSize(){
        return sz;
    }
};
int main()
{
    Stack<char> st;
    st.PUSH('a');
    st.PUSH('b');
    st.PUSH('c');
    // st.GetAll();
    // cout<<"\n";
    // //cout<<st.TOP()<<"\n";
    // //st.POP();
    // //cout<<st.TOP();
    // //cout<<st.isEmpty();

    // cout<<st.TOP();
    while(st.stackSize()>0){
        cout<<st.TOP()<<" ";
        st.POP();
    }
    Stack<char> temp;
    while(st.stackSize()>0){
        temp.PUSH(st.TOP());
        st.POP();
    }
    swap(st,temp);
    while (st.stackSize()>0){
        cout<<st.TOP()<<" ";
        st.POP();
    }
    cout<<st.TOP();





}
