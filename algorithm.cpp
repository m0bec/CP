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


//-----nCr--------------------------------
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
/*use
    ll ans = 1;

    f[0] = 1;
	for(ll i=1;i<=200000;i++) f[i] = (f[i-1]*i)%mod;
	for(ll i=0;i<=200000;i++) rf[i] = pw(f[i], mod-2);

    for(ll i = 0; i <= cou; i++){
        ans = (ans * ncr(c[i]+n-1,c[i]))%mod;
    }
*/
//----------------------------------------------------------------

//---------------gcd---------------------------------
ll m,n;
ll gcd(ll m, ll n){
	if(n == 0){
		return m;
	}
	else{
		gcd(n,m%n);
	}
}
 