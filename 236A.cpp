#include<bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;

    unordered_set<char> Chars;
    for (char ch : username) {
        Chars.insert(ch);
    }

    if (Chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
