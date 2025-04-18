#include <bits/stdc++.h>
using namespace std;
int n,i;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=n;i>=0;i--){
        if (i % 10 == 0) cout << i << " ";
    }
}
