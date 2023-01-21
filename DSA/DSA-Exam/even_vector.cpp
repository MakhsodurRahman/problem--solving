#include <iostream>
#include <vector>
using namespace std;

vector<int> even_generator(vector<int> arr) {
    vector<int> even_arr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            even_arr.push_back(arr[i]);
        }
    }
    return even_arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> even_arr = even_generator(arr);
    for (int i = 0; i < even_arr.size(); i++) {
        cout << even_arr[i] << " ";
    }
    return 0;
}

