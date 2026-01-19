#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& a, int left, int right, int x) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (a[mid] == x) return mid;
    if (a[mid] > x) return binarySearch(a, left, mid - 1, x);
    return binarySearch(a, mid + 1, right, x);
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    int x = 7;
    int last=a.size()-1;
    cout << binarySearch(a, 0, last , x);
    return 0;
}
