#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n; i++){
        int sz;
        cin>>sz;
        string s;
        cin>>s;
        stack<char> st;
        for(int i = 0; i<sz; i++){
            char c = s[i];
            if(c == 'Q'){
                st.push(c);
            }
            else{
                if(st.empty() == false){
                    st.pop();
                }
            }
        }
        if(st.empty() == true){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}