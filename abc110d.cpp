#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll , ll> P;
typedef pair<ll, ll> PL;
const ll INT_INF = 2147483646;
const ll ll_INF = 9223372036854775807;
ll mod = 1e9+7;

bool SecondCompare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second>b.second;
}


ll f[200005],rf[200005];
ll pw(ll a, ll b){
	ll res = 1;
	while(b){
		if(b%2) res = (res*a)%mod;
		a = (a*a)%mod;
		b/=2;
	}
	return res;
}

ll ncr(ll a, ll b){
	return (((f[a]*rf[b])%mod)*rf[a-b])%mod;
}
 
ll a[200005],b[200005],cou,c[200005];
ll n,m;
int main(){
    cin >> n >> m;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
/*
    cou = 0;
    for(ll i = 2; i <= 200000; i++){
        if(a[i] == 0){
            b[cou] = i;
            ++cou;
            for(ll j = i; j <= 200000; j += i){
                ++a[j];
            }
        }
    }
*/
 ll cou1 = -1;
 ll mem = m;
for(int i = 2; i*i <= m; i++){
    if(mem%i == 0)  ++cou1;
    while(mem%i==0){
        mem /= i;
        ++c[cou1];
    }
}
if(mem != 1){
    ++cou1;
    ++c[cou1];
}
   
/*
    for(ll i = 0; m != 1; i++){
        if(m%b[i] == 0) ++cou1;
        while(m % b[i] == 0){
            m/= b[i];
            ++c[cou1];
        }
    }
*/
    ll ans = 1;

    f[0] = 1;
	for(ll i=1;i<=200000;i++) f[i] = (f[i-1]*i)%mod;
	for(ll i=0;i<=200000;i++) rf[i] = pw(f[i], mod-2);

    for(ll i = 0; i <= cou1; i++){
        ans = (ans * ncr(c[i]+n-1,c[i]))%mod;
    }

    cout << ans << endl;
}