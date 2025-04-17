#include <bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> a >> b;
    cout << a+b << "\n";
    if(a+b>=50) cout << "pass";
    else cout << "fail";
}
