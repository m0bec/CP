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

const int SIZE = 2e5;
int n;
pair<ll,ll> a[SIZE];

int main(){
    cin >> n;
    ll tmp1,tmp2;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        tmp1 = max(a[i].first,a[i].second);
        tmp2 = min(a[i].first,a[i].second);
        a[i].first = tmp1;
        a[i].second = tmp2;
    } 

    ll ans = 1;

    sort(a,a+n);

    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            ++ans;
        }

    }

    cout << ans << endl;
    
}