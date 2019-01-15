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
 
ll l,n;
string s;
ll x[200010];
ll x1[200010],x2[200010],x3[200010];
ll ans;

void sol(ll lp,ll rp,int flag){
    if(lp > n-1-rp) return;
    ll lv,rv;
    if(flag < 0){
        ans += x2[lp];
        x3[rp] += x2[lp];
        ++lp;
    }
    else{
        ans += x3[rp];
        x2[lp] += x3[rp];
        ++rp;
    }

    cout << ans << endl;
    sol(lp,rp, -1*flag);

    return;
}



int main(){
    cin >> l >> n;
    for(int i = 0; i < n; i ++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        x1[i] = x[n-1-i];
    }

    x2[0] = x[0];
    x3[0] = l-x1[0];
    for(int i = 1; i < n; i++){
        x2[i] = x[i]-x[i-1];
        x3[i] = x1[i-1]-x1[i];
    }


    sol(0,0,1);
    cout << ans << endl;
    ll mem = ans;
    ans = 0;
        x2[0] = x[0];
    x3[0] = l-x1[0];
    for(int i = 1; i < n; i++){
        x2[i] = x[i]-x[i-1];
        x3[i] = x1[i-1]-x1[i];
    }
    sol(0,0,-1);
    ans = max(mem,ans);

    cout << ans << endl;

}