#include <bits/stdc++.h>
using namespace std;
int n,d,i=0;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> d;
    if(d>=21){
        n++;
        if (n>12) n=1;
    }
    if(n>=10){
        cout << "fall";
    }
    else if(n>=7){
        cout << "summer";
    }
    else if(n>=4){
        cout << "spring";
    }
    else cout << "winter";

}
