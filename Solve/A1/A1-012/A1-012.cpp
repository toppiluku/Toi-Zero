#include <bits/stdc++.h>
using namespace std;
int n,a;
string s;
int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    cin >> s;
    a = (n%10)*10+(n/10);
    if (s=="+") cout << n << " + " << a << " = " << n+a;
    else cout << n << " * " << a << " = " << n*a;
}
