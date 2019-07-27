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

const int SIZE = 1e5+100;
ll n,a[SIZE];
ll ans[SIZE];

int main(){
    cin >> n;
    ll mem = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    
    }
    mem = a[0];
    for(int i = 1; i < n; i++){
        if(i%2 == 0){
            mem += a[i];
        }
        else{
            mem -= a[i];
        }
    }
    ans[0] = mem;
    cout << mem << ' ';
    for(int i = 1; i < n; i++){
        ans[i] = a[i-1]-ans[i-1]/2;
        ans[i] *= 2;
        cout << ans[i] << ' ';
    }
    cout << endl;
}