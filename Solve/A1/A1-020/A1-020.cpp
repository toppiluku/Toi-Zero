#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a> b && b > c) cout << "decreasing";
    else if (a < b && b < c) cout << "increasing";
    else cout << "neither";
}
