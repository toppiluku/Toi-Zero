#include <bits/stdc++.h>
using namespace std;
int y,c;
int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> y >> c;
    if(y<=1990){
        if(c<=1500) cout << 1250;
        else if (1500<c && c<=2000) cout << 1400;
        else cout << 2000;
    }
    else if (1991<=y && y<=1999){
        if(c<=1500) cout << 1100;
        else if (1500<c && c<=2000) cout << 1300;
        else cout << 1700;
    }
    else {
        if(c<=1500) cout << 1000;
        else if (1500<c && c<=2000) cout << 1200;
        else cout << 1500;
    }
}
