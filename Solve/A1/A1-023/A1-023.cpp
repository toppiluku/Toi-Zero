#include <bits/stdc++.h>
using namespace std;
char a;
int main() {
    int temp;
    cin >> temp >> a;
    a = toupper(a);
    if (a == 'F'){
        temp = (temp - 32) * 5 / 9;
    }
    if (temp <= 0){
        cout << "solid";
    }
    else if (temp >= 100){
        cout << "gas";
    }
    else{
        cout << "liquid";
    }
}
