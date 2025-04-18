#include <bits/stdc++.h>
using namespace std;
int n,i;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=1;i<=n;i++){
        if (i%5==0) cout << "X";
        else cout << "*";
    }
}
