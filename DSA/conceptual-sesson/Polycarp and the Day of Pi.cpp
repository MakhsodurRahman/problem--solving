#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;


    while(n--)
    {
        string pi = "314159265358979323846264338327";
        string s;
        cin>>s;
        int counter = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == pi[i])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        cout<<counter<<'\n';
    }


    return 0;
}
