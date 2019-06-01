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

ll n,c,k;
ll t[100010];
ll ans;

/*
void solve(int ind){
    ll st = t[ind];
    ll num = 1;
    ++ind;
    while(ind < n){
        if(st+k >= t[ind] && num <= c){
            ++num;
        }
        else{
            ++ans;
            break;
        }
        ++ind;
    }
    if(ind < n) solve(ind);
    else{
        ++ans;
        return;
    }
}
*/

int main(){
    cin >> n >> c >> k;
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    sort(t,t+n);

    ll nn = 0,tmp = 0;

    for(int i = 0; i < n; i++){
        if(nn == 0){
            tmp = t[i];
            ++nn;
            ++ans;
        }
        if(t[i+1] - tmp <= k && nn < c){
            ++nn;
        }
        else{
            nn = 0;
        }
    }


    //solve(0);

    cout << ans << endl;
}