#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Missing number is "<<findMissing(arr, arr_size);
    return 0;
}

