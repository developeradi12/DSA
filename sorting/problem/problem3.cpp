#include <iostream>
#include <climits>
using namespace std;

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int smallestele(int arr[], int l, int r, int K) {
    if (K > 0 && K <= r - l + 1) {
        int pos = partition(arr, l, r);
        if (pos - l == K - 1) {
            return arr[pos];
        }
        if (pos - l > K - 1) {
            return smallestele(arr, l, pos - 1, K);
        }
        return smallestele(arr, pos + 1, r, K - (pos - l + 1));
    }
    return INT_MAX;
}

int main() {
    int arr[] = {3, 5, 2, 1, 4, 7, 8, 6};
    int K = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = smallestele(arr, 0, n - 1, K);
    if (result == INT_MAX) {
        cout << "K is out of bounds" << endl;
    } else {
        cout << "The " << K << "th smallest element is " << result << endl;
    }

    return 0;
}
