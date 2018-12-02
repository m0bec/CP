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

ll n,m;
pair<ll,pair<ll,ll>> p[100010];
pair<ll,pair<ll,ll>> a[100010];
string aa[100010];
int cou[100010];

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> a[i].first >> a[i].second.first;
        a[i].second.second = i;
    }

    sort(a,a+m);

    for(int i = 0; i < m; i++){
        ++cou[a[i].first];
        p[i].first = a[i].second.second;
        p[i].second.first = a[i].first;
        p[i].second.second = cou[a[i].first];
    }

    sort(p,p+m);

    for(int i = 0; i < m; i++){
        cout << setfill('0') << setw(6) << p[i].second.first;
        cout << setfill('0') << setw(6) << p[i].second.second << endl;
    }

    
}