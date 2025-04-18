#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string r[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int v[]    = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    for(int i = 0; i < 13; i++){
        while(n >= v[i]) {
            cout << r[i];
            n -= v[i];
        }
    }
}
