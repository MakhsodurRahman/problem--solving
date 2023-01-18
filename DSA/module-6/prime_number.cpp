#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<int> prime;
    vector<int> visited(n+1);

    for(i = 2; i<=n; i++){
        if(visited[i] == false){

            prime.push_back(i);
            for(int x = 2; i*x<=n; x++){
                visited[i*x] = true;
            }
        }
    }
    cout<<prime.size()<<"\n";
    for(i = 0; i<prime.size(); i++){
        cout<<prime[i]<<"  ";
    }
}
