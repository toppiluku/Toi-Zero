#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    const char *x[4] = {"all different","neither","0","all the same"};
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int cnt=0;
    cin >> a >> b >> c;
    if(a==b) cnt++;
    if(a==c) cnt++;
    if(b==c) cnt++;
    cout << x[cnt];
}
