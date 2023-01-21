#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

void check_occurrences(int arr[], int n, int k) {
    int first_occurrence = binary_search(arr, n, k);
    int last_occurrence = binary_search(arr, n, k);

    if (last_occurrence == -1) {
        cout << "NO" << endl;
        return;
    }

    while (last_occurrence < n - 1 && arr[last_occurrence + 1] == k) {
        last_occurrence++;
    }

    if (last_occurrence - first_occurrence >= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {

    int n,k;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    //int arr[] = {1, 3, 4, 6, 6, 9, 17};
    int n_value = sizeof(arr) / sizeof(arr[0]);
    cin>>k;

    check_occurrences(arr, n_value, k);

    return 0;
}
