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

ll x,fromx, tox, n, a, b, ans;

int main(){
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(fromx == 0)  fromx = x;
        else{
            tox = x;
            if(tox-fromx <= b/a)    ans += (tox-fromx)*a;
            else    ans += b;
            fromx = tox;
        }
    }

    printf("%lld\n", ans);
}