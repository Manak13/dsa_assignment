#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter string1: ";
    getline(cin, s1);

    int n = s1.length();
    for (int i = 0; i < n; i++) {
        if (!(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
              s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')) {
            s2.push_back(s1[i]);
        }
    }

    cout << s2;
    return 0;
}