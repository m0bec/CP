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
ll n,k;
ll a[size];
ll sa[size];

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++)  cin >> a[i];

    int co = 0;
    for(ll j = 1; j <= k; j <<= 1)    ++co;


    for(int i = 0; i < n; i++){
        ll ch = 1;
        for(int j = 0; j < co; j++){
            if(ch & a[i]) ++sa[j];
            ch <<= 1;
        }
    }
    ++co;
    //cout << co << endl;

    ll ans = 0;
    for(int j = 0; j < co; j++){
        if(sa[j] <= n/2){
            ans += (1LL<<j);
            if(k < ans){
                ans -= (1LL<<j);
                //break;
            }
        }
    }
    ll mem = ans;
    ans = 0;
    for(int j = co-1; j >= 0; j--){
        if(sa[j] <= n/2){
            ans += (1LL<<j);
            if(k < ans){
                ans -= (1LL<<j);
            }
        }
    }

    ll ans2 = 0;
    for(int i = 0; i < n; i++)  ans2 += (ans ^ a[i]);
    ll mem2 = 0;
    ans = mem;
    for(int i = 0; i < n; i++)  mem2 += (ans ^ a[i]);
    cout << max(ans2,mem2) << endl;

}