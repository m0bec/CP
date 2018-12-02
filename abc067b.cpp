#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll , ll> P;
typedef pair<ll, ll> PL;
const ll INT_INF = 2147483646;
const ll ll_INF = 9223372036854775807;
ll mod = 1e9+7;

bool SecondCompare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second>b.second;
}


int n,k;
int l[51];

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l,l+n);

    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += l[n-1-i];
    }
    cout << ans << endl; 
}