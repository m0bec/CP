#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

ll n,m;
const ll SIZE = 1e5+10;
ll l[SIZE],r[SIZE];

int main(){
    ll lef = 0, rig = LL_INF;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
        lef = max(l[i],lef);
        rig = min(r[i],rig);
    }

    ll ans = rig-lef;
    if(ans < 0) ans = 0;
    else    ans++;
    cout << ans << endl;
}