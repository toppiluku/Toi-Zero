#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i;
    int l = s.length();
    for(i = 0; i < l ; i++) {
        cout << s[i];
        if((l - i - 1) % 3 == 0 && i != l - 1) cout << ",";
    }
}
