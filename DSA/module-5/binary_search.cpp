#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int low = 0, high = n -1;
    int flag = 0;
    while(low <= high){

        int mid = (low + high)/2;
        cout<<low<<" low "<<high<<" high "<<mid<<" mid\n";
        if(a[mid] == k){
            cout<<mid<<" found ";
            flag++;
            break;
        }
        if(a[mid]>k){
            high = mid - 1;
        }
        else{
            //a[mid]<k
            low = mid + 1;
        }

    }
    if(flag == 0){
        cout<<"value invalid";
    }

}
