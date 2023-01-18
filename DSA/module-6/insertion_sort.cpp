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

    for(i = 1; i<n; i++){
        int idx = i;
        while(idx >= 1){
            if(arr[idx-1] > arr[idx]){
                swap(arr[idx-1],arr[idx]);
                idx--;
            }
            else{
                break;
            }
        }
    }
    for(i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}
