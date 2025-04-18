#include <bits/stdc++.h>
using namespace std;
int n,i;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cout << "*";
    }
    if(n-2>=1){
        cout << "\n";
        for(i=0;i<n-2;i++){
            cout << "*";
        }
    }
    if(n-4>=1){
        cout << "\n";
        for(i=0;i<n-4;i++){
            cout << "*";
        }
    }
}
