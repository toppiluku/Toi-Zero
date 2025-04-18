#include <bits/stdc++.h>
using namespace std;
int n,cnt=0,i,x;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=1;i<=n;i++){
        cnt += pow(i,2);
    }
    cout << cnt;
}
