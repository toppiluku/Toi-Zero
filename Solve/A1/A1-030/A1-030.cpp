#include <bits/stdc++.h>
using namespace std;
int n,a,i,j,cnt=0,mx=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            cin >> a;
            mx=max(a,mx);
        }
        cout << mx;
        if (i<n-1) cout << " + ";
        cnt+=mx;
        mx=0;
    }
    if (n!=1) cout << " = " << cnt;
}
