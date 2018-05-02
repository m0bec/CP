#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;

ll a, b, x, ans;

int main(){
    cin >> a >> b >> x;
    ans = b/x - a/x;
    if(a%x == 0)    ++ans;
    cout <<  ans << endl;
}