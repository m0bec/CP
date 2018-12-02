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


double t,a,h[10010];
int n;

int main(){
    cin >> n >> t >> a;
    double min = 1000000;
    int ans;
    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
        h[i] = t- h[i] * 0.006;
        if(abs(h[i]-a) < abs(min)){
            min = abs(h[i]-a);
            ans = i+1;
        }
    }
    cout << ans << endl;
}