#include <bits/stdc++.h>
using namespace std;
int n,x,i,mn=2e9;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        mn=min(mn,x);
    }
    cout << mn;
}
