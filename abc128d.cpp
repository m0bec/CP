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

ll k,n;
ll v[100],v2[100];
ll ans;
void solve(ll ge, ll pa){
    solve(ge-2,pa+1);
    if(ge <= 0 || pa >= n) return;
    ll tmp;
    for(int i = 0; i < max(ge+pa,n); i++){
        tmp = 0;
        for(int j = 0; j < ge-i; j++){
            v2[j] = v[j];
        }
        for(int j = ge; j < ge+pa+i; j++){
            v2[j] = v[n-1-j];
        }
        sort(v2,v2+ge+pa);
        for(int j = pa; j < ge+pa; j++){
            tmp += v2[j];
            v2[j] = 0;
        }
        ans = max(ans,tmp);
    }
    return;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        //v[i] += v[i-1];
    }

    solve(k,0);
    
    cout << ans << endl;
}