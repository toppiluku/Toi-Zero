#include <bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    cin >> a >> b;
    if (a=="H" && b=="4567"){
        cout << "safe unlocked";
    }
    else if (a=="H"){
        cout << "safe locked - change digit";
    }
    else if (b=="4567"){
        cout << "safe locked - change char";
    }
    else cout << "safe locked";
}
