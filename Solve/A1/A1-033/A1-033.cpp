#include <bits/stdc++.h>
using namespace std;
int n,i,cnt;
char s;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s;
        if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') cnt++;
    }
    cout << cnt;
}

