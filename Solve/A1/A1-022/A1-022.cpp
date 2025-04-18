#include <bits/stdc++.h>
using namespace std;
int n,m;
int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> n >> m;
    if(m==12 && n>=22 || m==1 && n<=19){
        cout << "capricorn";
    }
    else if(m==1 && n>=20 || m==2 && n<=18){
        cout << "aquarius ";
    }
    else if(m==2 && n>=19 || m==3 && n<=20){
        cout << "pisces";
    }
    else if(m==3 && n>=21 || m==4 && n<=19){
        cout << "aries";
    }
    else if(m==4 && n>=20 || m==5 && n<=20){
        cout << "taurus ";
    }
    else if(m==5 && n>=21 || m==6 && n<=21){
        cout << "gemini";
    }
    else if(m==6 && n>=22 || m==7 && n<=22){
        cout << "cancer";
    }
    else if(m==7 && n>=23 || m==8 && n<=22){
        cout << "leo";
    }
    else if(m==8 && n>=23 || m==9 && n<=22){
        cout << "virgo";
    }
    else if(m==9 && n>=23 || m==10 && n<=23){
        cout << "libra";
    }
    else if(m==10 && n>=24 || m==11 && n<=21){
        cout << "scorpio";
    }
    else cout << "sagittarius";
}
