#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int n = strlen(str);
    for (int i = 0, j = n-1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}