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

const int SIZE = 1e5+10;
ll n,k;
ll a[SIZE];

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }

    ll ans = 0;
    ll st = 0,en = 1;
    while(en != n+1){
        if(a[en]-a[st] >= k){
            ans += n-en+1;
            ++st;
            if(st >= en)    en = st+1;
        }
        else{
            ++en;
        }
    }

    cout << ans << endl;
}