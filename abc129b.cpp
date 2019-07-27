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

ll n;
ll w[110];
ll mem_sum;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        mem_sum += w[i];
    }


    ll ans = LL_INF;
    ll mem = 0;
    for(int i = 0; i < n; i++){
        mem += w[i];
        if(ans > abs(mem_sum - 2*mem))   ans = abs(mem_sum - 2*mem);
    }

    cout << ans << endl;
}