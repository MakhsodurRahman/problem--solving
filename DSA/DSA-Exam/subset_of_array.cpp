#include<bits/stdc++.h>
using namespace std;
bool is_subset(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> sorted_arr1 = arr1;
    vector<int> sorted_arr2 = arr2;
    sort(sorted_arr1.begin(), sorted_arr1.end());
    sort(sorted_arr2.begin(), sorted_arr2.end());

    for (const auto& element : sorted_arr1) {
        if (!binary_search(sorted_arr2.begin(), sorted_arr2.end(), element)) {
            return false;
        }
    }
    return true;
}

int main() {

    int n,i;
    cin>>n;
    vector<int> arr1(n);
    for(i = 0; i<n; i++){
        cin>>arr1[i];
    }

    cin>>n;
    vector<int> arr2(n);
    for(i = 0; i<n; i++){
        cin>>arr2[i];
    }
    //vector<int> arr1 = {1, 2, 3};
    //vector<int> arr2 = {1,2, 3, 4, 5};
    cout << (is_subset(arr1, arr2) ? "YES" : "NO") << endl;
    return 0;
}

