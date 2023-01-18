#include<bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *arr;
    int cap;
    int sz;

    void increase_size()
    {
        cap = cap*2;

        int *temp = new int[cap];

        for(int i = 0; i<sz; i++)
        {

            temp[i] = arr[i];

        }
        delete [] arr;
        temp = arr;
    }
public:
    Array()
    {

        arr = new int[1];

        cap = 1;

        sz = 0;
    }
    void push_back(int x)
    {
        if(sz==cap)
        {
            increase_size();
        }
        arr[sz] = x;

        sz++;
    }

    void print()
    {
        for(int i = 0; i<sz; i++)
        {
            cout<<arr[i]<<"\n";

        }
    }
    void getSize()
    {
        cout<<sz<<"\n";
    }
    void insert_v(int pos,int value)
    {
        if(sz==cap)
        {
            increase_size();
        }
       for(int i = sz - 1; i>=pos; i--){
            arr[i+1] = arr[i];
       }
       arr[pos] = value;
       sz++;
    }
    void getElement(int id)
    {
        if(id>=sz)
        {
            cout<<"id not found";
        }
        else
        {
            cout<<"==========="<<arr[id]<<"\n";
        }
    }

    void pop_back(){
        if(sz==0){
            cout<<"array size is zero";
        }
        sz--;
    }
    void erase(int pos){
        if(pos>=sz){
            cout<<"position does not exit";
        }
        for(int i = pos +1; i<sz; i++){
           // arr[i-1] = arr[i];
           swap(arr[i-1],arr[i]);
        }
        sz--;
    }
};

int main()
{
    Array a;

    a.push_back(56456);

    a.push_back(44);

    a.push_back(444);

    //a.getSize();

   // a.getElement(2);

   //a.insert_v(1,999);
    //a.pop_back();
    a.erase(1);
    a.print();


    return 0;

}


