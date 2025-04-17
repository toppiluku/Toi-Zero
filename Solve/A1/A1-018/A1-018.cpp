#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    const char *r[9] = {"I","II","III","IV","V","VI","VII","VIII"};

    if (n < 0){
        cout << "Error : Please input positive number";
    }
    else if (n < 1 || 9 < n){
        cout << "Error : Out of range";
    }
    else cout << r[n-1];
}
