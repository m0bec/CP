#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;

int main(){
    int n, p, a[110], even = 0, odd = 0;
    ll ans = 0;
    cin >> n >> p;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)   ++even;
        else    ++odd;
    }

    if(odd == 0){
        if(p == 0)  cout << (ll)pow(2.0f, n) << endl;
        else cout << "0\n";
    }
    else{
        cout << (ll)pow(2.0f, n-1) << endl;
    }
}