#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    stack<int> st;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        st.push(num);
    }

    while(st.empty()i == false){
        cout<<st.top()<<" ";
        st.pop();
    }
}