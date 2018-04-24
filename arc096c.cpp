#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}
ll a, b, c, x, y, mem, ans;

int main(){
    cin >> a >> b >> c >> x >> y;

    mem = maxll(x, y) * 2 * c;
    ans = minll(mem, a*x + b*y);
    if(x > y){
        ans = minll(ans, c*2*y + a*(x-y));
    }
    else{
        ans = minll(ans, c*2*x + b*(y-x));
    }

    cout << ans << endl;
}