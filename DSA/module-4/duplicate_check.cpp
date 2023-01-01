#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int countt = 0;
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){

            if(i==j)
                continue;
            if(a[i]==a[j]){
               countt++;
            }
        }
    }
    cout<<countt;
}
