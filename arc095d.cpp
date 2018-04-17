#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const ll MOD = 1E9+7;
 
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
const ll mod = 1e9 + 7;
int n;
ll a[100000+10];
ll fact[1010], fact_inv[1010], inv[1010];

long long mod_pow(long long x, long long n){
    if(n == 0) return 1;
    long long res = mod_pow(x * x % mod, n / 2);
    if(n & 1) res = res * x % mod;
    return res;
}

long long combination(long long n, long long k){
    return fact[n] * fact_inv[k] % mod * fact_inv[n - k] % mod;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    int cou = min(3, n/2), lc = n-1;
    ll mem;
        ll low = upper_bound(a, a+n, a[lc]/2) - a;
        if(low >= 1){
            if(abs((double)a[lc]/2 - a[low]) >= abs((double)a[lc]/2 - a[low-1])){
                low--;
            }
        }
        cout << a[n-1] << ' ' <<  a[low] << endl;
}