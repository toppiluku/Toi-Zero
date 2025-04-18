#include <bits/stdc++.h>
using namespace std;
int i,n,ev=0,od=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    for(i=0;i<3;i++){
        cin >> n;
        if(n%2==0) ev++;
        else od++;
    }
    cout << "even " << ev << "\n";
    cout << "odd " << od;
}

