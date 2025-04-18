#include <bits/stdc++.h>
using namespace std;
int n,i,cnt=1;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=n;i>=1;i--){
        cnt *= i;
    }
    cout << cnt;
}
