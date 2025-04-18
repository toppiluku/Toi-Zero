#include <bits/stdc++.h>
using namespace std;
int i;
char x[10];
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> x;
    for(i=0;i<strlen(x);i++) {
        if(isupper(x[i])) x[i]+=32;
    }
    for(i=strlen(x)-1;i>=0;i--){
        cout << x[i];
    }
}
