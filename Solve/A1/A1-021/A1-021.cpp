#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    if (n==1500){
        cout << "yes";
    }
    else if (n%400==0){
        cout << "yes";
    }
    else if (n%4==0 && n%100!=0){
        cout << "yes";
    }
    else if (n%100 && n%400!=0){
        cout << "no";
    }
    else cout << "no";
}
