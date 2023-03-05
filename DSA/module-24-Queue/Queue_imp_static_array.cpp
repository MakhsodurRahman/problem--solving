#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue{
public:
    int a[MAX_SIZE];
    int l,r;
    int sz;
    Queue(){
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int value){
        if(r == MAX_SIZE){
            cout<<"Queue is Full"<<"\n";
        }
        r++;
        //this is called circular array implimentation
        if(r == MAX_SIZE){
             r = 0;
        }
        a[r] = value;
        sz++;
    }

    void dequeue(){
        if(l > r){
            cout<<"Queue is empty"<<"\n";
        }
        l++;
        if(l == MAX_SIZE){
            l = 0;
        }
        sz--;
    }

    int front(){
        if(sz == 0){
            cout<<"Queue is empty"<<"\n";
            return - 1;
        }
        return a[l];
    }

    int size(){
        return sz;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<"size is "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<"size is "<<q.size()<<"\n";
}
