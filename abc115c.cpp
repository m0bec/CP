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
 
int n,k;
ll h[100010];

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h, h+n);
    ll ans = 0;
    ll memans = 0;
    ans = h[k-1]-h[0];

    for(int i = k; i < n; i++){
        if(ans > h[i]-h[i-k+1]) ans = h[i]-h[i-k+1];
    }
    cout << ans << endl;
}