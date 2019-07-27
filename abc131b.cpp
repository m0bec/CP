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

ll n,l;
ll arr[1000],arr2[1000];

int main(){
    cin >> n >> l;
    ll mem;
    ll mem_min = LL_INF;
    for(int i = 0; i < n; i++){
        arr[i] = l + i;
        if(mem_min > abs(arr[i])){
            mem_min = abs(arr[i]);
            mem = i;
        }
    }

    sort(arr2,arr2+n);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += arr[i];
    }
    ans -= arr[mem];

    cout << ans << endl;
}