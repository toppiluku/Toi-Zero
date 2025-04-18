#include <bits/stdc++.h>
using namespace std;
int cnt,n;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    map<int,int> mp;
    mp[1] = 100;
    mp[2] = 120;
    mp[3] = 200;
    mp[4] = 60;
    while (1){
        cin >> n;
        if (n==5) {
            cout << "Bye Bye" << "\n" ;
            cout << "Total Calories: " << cnt;
            break;
        }
        else cnt += mp[n];
    }
}
