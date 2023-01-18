#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }
    bool sorted = true;
    for(i = 0; i<n; i++){
        for(j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = false;
            }
             cout<<"after pass "<<i<<arr[i]<<" \n";
        }
        if(sorted){
            break;
        }

    }
    cout<<"after sorting ";
    for(i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
