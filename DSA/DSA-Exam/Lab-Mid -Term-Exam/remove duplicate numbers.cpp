#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n) {
    sort(arr, arr + n);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    removeDuplicates(arr, n);
    return 0;
}

