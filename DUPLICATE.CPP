#include <bits/stdc++.h>
using namespace std;

void duplicateTwos(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);     
    int j = 0;             

    for (int i = 0; i < n && j < n; i++) {
        if (arr[i] == 2) {
            
            result[j] = 2;
            if (j + 1 < n) {
                result[j + 1] = 2;
            }
            j += 2;
        } else {
            
            result[j] = arr[i];
            j++;
        }
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 5};
    duplicateTwos(arr);

    cout << "Modified array= ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}