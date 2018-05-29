#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

ll a,b,c,k, ma;

int main(){
    cin >> a >> b >> c >> k;
    ma = max(a, max(b,c));

    for(int i = 0; i < k; i++)  ma *= 2;
    cout << a+b+c+ma-max(a,max(b,c)) << endl;
}