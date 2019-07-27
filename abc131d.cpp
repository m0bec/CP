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
const int SIZE = 2e5+10;
ll a[SIZE],b[SIZE];
pair<ll,ll> ba[SIZE];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        ba[i].first = b[i];
        ba[i].second = a[i];  
    }

    sort(ba,ba+n);
    ll tim = 0;
    for(int i = 0; i < n; i++){
        tim += ba[i].second;
        if(ba[i].first < tim){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}