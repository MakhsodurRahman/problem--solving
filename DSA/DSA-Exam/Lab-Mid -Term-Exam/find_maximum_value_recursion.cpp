#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max = findMax(arr+1, n-1);

    if (arr[0] > max) {
        return arr[0];
    } else {
        return max;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = findMax(arr, n);
    cout << max << endl;

    return 0;
}

