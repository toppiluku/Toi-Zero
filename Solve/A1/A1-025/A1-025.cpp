#include <bits/stdc++.h>
using namespace std;
string c;
int main() {
    cin >> c;
    for (char &ch : c) ch = toupper(ch);

    string val = c.substr(0, c.size() - 1);
    char ty = c.back();

    map<string, string> a = {
        {"A", "ace"}, {"J", "jack"}, {"Q", "queen"}, {"K", "king"}
    };
    map<char, string> b = {
        {'D', "diamonds"}, {'H', "hearts"}, {'S', "spades"}, {'C', "clubs"}
    };

    if (a.count(val)) val = a[val];
    cout << val << " of " << b[ty] << endl;

    return 0;
}
