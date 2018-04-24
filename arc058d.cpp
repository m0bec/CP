#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
 
ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}

ll fact[200000+10], fact_inv[200000+10], inv[200000+10], mem[200000+10];
const ll MOD = 1000000000+7;

ll mod_pow(ll x, ll n){
    if(n == 0) return 1;
    ll res = mod_pow(x * x % MOD, n / 2);
    if(n & 1) res = res * x % MOD;
    return res;
}
ll comb(ll n, ll k){
    return (fact[n] * inv[k] % MOD) * inv[n - k] % MOD;
}

ll a,b,h,w;

int main(){
    cin >> h >> w >> a >> b;

    fact[0] = inv[0] = 1;
    for(int i = 1; i <= h+w; i++){
        fact[i] = (fact[i-1]*i) % MOD;
        inv[i] = mod_pow(fact[i], MOD-2);
    }

    ll ans = 0, mem_cul;
    for(int i = b; i < w; i++){
        mem_cul = 0;
        mem_cul = comb(h-a-1+i, i) * comb((w-i-1)+(a-1), a-1) % MOD;
        ans += mem_cul;
        ans %= MOD;
    }

    cout << ans % MOD <<endl;
}