#include <bits/stdc++.h>
using namespace std;
int n,s,h,mn,mx,cntmx=0,cntmn=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> s;
    cntmn=s,cntmx=s;
    while (n--){
        cin >> h;
        if (h%3==0 && h%4==0){
            mn = (h/4)*10;
            cntmx -= mn;
            mx = (h/3)*10;
            cntmn -= mx;
        }
        else if (h%3==0 && h%4!=0){
            cntmn -= (h/3)*10;
            cntmx -= (h/3)*10;
        }
        else if (h%3!=0 && h%4==0) {
            cntmn -= (h/4)*10;
            cntmx -= (h/4)*10;
        }
    }
    cout << cntmn << " " << cntmx;
}
