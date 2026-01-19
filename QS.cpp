#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i<=j) {
        while (arr[i] < pivot && i<=high ){
            i++;
        }
        while (arr[j] > pivot && j>=low){
          j--;
        }
        if(i<j){
          swap(arr[i], arr[j]);
        }
    }
  swap(arr[j],arr[low]);
  return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size() - 1);
    for (int x : arr) cout << x << " ";
    return 0;
}
