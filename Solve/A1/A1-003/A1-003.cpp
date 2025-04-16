#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if ( a >= b && a >= c) cout << a;
    else if (b >= a && b >= c) cout << b;
    else cout << c;
}
