#include <iostream>
#include <algorithm>
using namespace std;

int mergeSort(int arr[], int left, int right, int k);
int merge(int arr[], int left, int mid, int right, int k);

int main()
{
    int nn,k;
    cin>>nn;
    int arr[nn];
    for(int i = 1; i<=nn; i++){
        cin>>arr[i];
    }
    //int arr[] = {6,1,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cin>>k;

    cout << mergeSort(arr, 0, n-1, k) << endl;
    return 0;
}

int mergeSort(int arr[], int left, int right, int k)
{
    int mid, inv_count = 0;
    if(right > left)
    {
        mid = (right + left)/2;
        inv_count  = mergeSort(arr, left, mid, k);
        inv_count += mergeSort(arr, mid+1, right, k);
        inv_count += merge(arr, left, mid+1, right, k);
    }
    return inv_count;
}

int merge(int arr[], int left, int mid, int right, int k)
{
    int i, j, inv_count = 0;
    i = left;
    j = mid;
    sort(arr+left, arr+right+1);
    while (i <= mid-1 && j <= right)
    {
        if (arr[i] + arr[j] == k)
        {
            inv_count++;
            i++;
            j++;
        }
        else if (arr[i] + arr[j] < k)
            i++;
        else
            j++;
    }
    return inv_count;
}
