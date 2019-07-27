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

ll r,l;

int main(){
    cin >> l >> r;

    if(l <= 2019 && r >= 2019){
        cout << 0 << endl;
        return 0;
    }

    if(r-l >= 2019){
        cout << 0 << endl;
        return 0;
    }

    ll mo = 2019;

        ll tmp = 2019;
        for(ll i = l; i <= r; i++){
            for(ll j = i+1; j <= r; j++){
                ll mem = (i*j)%mo;
                //cout <<i << ' ' << j  << ' ' <<  mem << endl;
                tmp = min(tmp, mem);
            }
        }

        cout << tmp << endl;

}