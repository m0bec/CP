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
 
ll n,m;
ll sosu[200005];
ll cou[200005];
ll sosum[200005];
int co;
int ccc;
ll ans=1;
void cf(ll na, ll ss){
    cout << na << ' ';
    if(na*n > m || m%na != 0) return;
    ans = max(ans,na);
    if(ss == ccc)   return;
    
    ll mem = na;
    cf(na,ss+1);
    
    while(mem*sosum[ss]*n <= m){
        mem *= sosum[ss];
        cf(mem, ss+1);
    }
}

int main(){
    cin >> n >> m;
    if(n == 1){
        cout << m << endl;
        return 0;
    }
    for(ll i = 2; i<=m/n; i++){
        if(cou[i] == 0){
            sosu[co] = i;
            ++co;
            for(ll j = i; j<= m/n; j+=i){
                ++cou[j];
            }
        }
    }

    sort(sosu,sosu+co);

    for(int i = 0; i < co; i++){
        if(sosu[i]*sosu[i] > m) break;
        if(m%sosu[i]==0){
            sosum[ccc] = sosu[i];
            cout << sosu[i] << endl;;
            ++ccc;
        }
    }
    
    cf(1,0);

    cout << ans << endl;
}