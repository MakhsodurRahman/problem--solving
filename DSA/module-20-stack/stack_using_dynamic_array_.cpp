#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int *a;
    int stack_size;
    int array_cap;
    Stack(){
        a = new int[1];
        stack_size = 0;
        array_cap = 1;
    }

    void increaseSize(){
        int *temp;
        temp = new int[array_cap*2];
        for(int i = 0; i<array_cap; i++)
            temp[i] = a[i];
        swap(a,temp);
        delete []temp;
        array_cap = array_cap*2;
    }
    void push(int value){
        if(stack_size + 1> array_cap){
           increaseSize();
        }
        stack_size += 1;
        a[stack_size -1] = value;
    }

    void pop(){
        if(stack_size == 0){
            cout<<"stack is empty";
            return;
        }
        a[stack_size - 1] = 0;
        stack_size -= 1;
    }

    int top(){
        if(stack_size == 0){
            cout<<"stack is empty";
            return -1;
        }
        return a[stack_size -1];
    }
};
int main()
{
    Stack st;

    st.push(150);
    st.push(140);
    st.push(140);
    st.push(13440);
    st.push(345140);
    st.push(34140);
    st.push(999140);

    st.pop();
    cout<<st.top();

}

