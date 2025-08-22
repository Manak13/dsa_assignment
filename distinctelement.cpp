#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int>mpp;  

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++; 
    }

    cout << "Number of distinct elements = " << mpp.size();
    return 0;
}