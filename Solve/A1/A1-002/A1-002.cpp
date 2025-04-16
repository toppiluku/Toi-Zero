#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    cout << "10 = " << n/10 << "\n";
    n%=10;
    cout << "5 = " << n/5 << "\n";
    n%=5;
    cout << "2 = " << n/2 << "\n";
    n%=2;
    cout << "1 = " << n << "\n";
    return 0;
}
