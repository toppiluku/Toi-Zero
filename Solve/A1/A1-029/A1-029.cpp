#include <bits/stdc++.h>
using namespace std;
char a[3];
int i,cnt=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> a;
    for(i=0;i<3;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') cnt++;
    }
    cout << cnt;
}
