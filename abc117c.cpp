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
 
const int size = 1e5+10;
ll n,m;
ll x[size];
ll sa[size];

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++)  cin >> x[i];
     
    sort(x,x+m);

    for(int i = 0; i < m-1; i++) sa[i] = x[i+1] - x[i];

    sort(sa,sa+m);

    ll ans = 0;
    for(int i = 0; i < m-n+1; i++)   ans += sa[i];

    cout << ans << endl;
}