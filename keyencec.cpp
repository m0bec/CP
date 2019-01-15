#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
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

ll n;
const int SI = 1e5+10;
ll a[SI],b[SI],sa[SI],samem[SI];
ll suma,sumsa;
 
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        suma += a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        sa[i] = b[i]-a[i];
        sumsa += sa[i];
    }
    sort(sa,sa+n);
  
    ll ans = 0;
    if(sumsa > 0){
        cout << -1 << endl;
        return 0;
    }

    ll minus = 0;
    for(int i = 0; i < n; i++){
        if(b[i] > a[i]) minus += b[i]-a[i];
    }

    ll sum = 0;
    while(minus > sum){
        sum += abs(sa[ans]);
        ++ans;
    }
    for(int i = 0; i < n; i++){
        if(b[i] > a[i]) ++ans;
    }
    cout << ans << endl;
}