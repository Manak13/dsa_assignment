#include <bits/stdc++.h>
using namespace std;


int linearsearch(int arr[], int n, int number) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            return i;
        }
    }
    return -1; 
}


int binarysearch(int arr[], int n, int number) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == number) {
            return mid;
        } else if (arr[mid] < number) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number = 11;

    
    int lindex = linearsearch(arr, n, number);
    if (lindex != -1) {
        cout << "Linear Search: Found at index " << lindex << endl;
    } else {
        cout << "Linear Search: Not found" << endl;
    }

    
    int bindex = binarysearch(arr, n, number);
    if (bindex != -1) {
        cout << "Binary Search: Found at index " << bindex << endl;
    } else {
        cout << "Binary Search: Not found" << endl;
    }

    return 0;
}