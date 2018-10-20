#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;
ll mod = 1e9+7;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
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

ll n,k;
ll a[50];
ll cou[50],cou0;

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++)  cin >> a[i];

    ll ans = 1;

    f[0] = 1;
	for(ll i=1;i<=200000;i++) f[i] = (f[i-1]*i)%mod;
	for(ll i=0;i<=200000;i++) rf[i] = pw(f[i], mod-2);

    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            if(a[i]%2 == 0) cou[i]--;
            cou[i] = log2(a[i])+1;
        }
        else ++cou0;
    }

    sort(cou,cou+n);

    cout << cou[0];

    for(ll i = 0; i <= ; i++){
        ans = (ans * ncr(c[i]+n-1,c[i]))%mod;
    }
}