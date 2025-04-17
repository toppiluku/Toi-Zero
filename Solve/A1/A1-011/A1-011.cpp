#include <bits/stdc++.h>
using namespace std;
string s;
int n[10];
char m[10];
int i,j=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> s;
    for(i=1;i<=5;i++){
        m[j]=s[i-1];
        if(s[i]==s[i-1]) n[j]++;
        else j++;
    }
    for(i=0;i<j;i++){
        cout << n[i]+1 << m[i];
    }
}
