#include<bits/stdc++.h>
using namespace std;
int x,i;
int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    cin >> x;
    for(i=0;i*i<x;i++){}
	cout << 2*(i-1)-(x%2!=i%2);
}
