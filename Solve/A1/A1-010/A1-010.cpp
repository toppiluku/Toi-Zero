#include <bits/stdc++.h>
using namespace std;
int n;
char a;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> a;
    a=tolower(a);
    if(n <= 18 || a == 's') cout << 20;
    else cout << 50;
}
