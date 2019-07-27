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
const int SIZE = 1e5+10;
ll a[SIZE],b[SIZE];
ll ans;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    ll sum_num = 0;
    for(int i = n-1; i >= 0; i--){
        a[i] += sum_num;
        if(a[i] % b[i] == 0)    continue;
        if(a[i] <= b[i]){
            ans += b[i]-a[i];
            sum_num += b[i]-a[i];
        }
        else{
            ll tmp = a[i]/b[i]+1;
            ans += tmp*b[i]-a[i];
            sum_num += tmp*b[i]-a[i];
        }
    }

    cout << ans << endl;
}