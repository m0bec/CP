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

const int SIZE = 100001 + 10;
ll waru = 1e9+7;

string l;

int main(){
    cin >> l;
    ll ans = 1;
    ll mem = 1;
    bool f = false;
    bool nf = false;
    for(int i = l.length()-1; i >= 0; i--){
        if(l[i] == '0'){
            f = true;
        }

        ans *= 3;
        ans %= waru;
    }


    if(f){
        for(int i = l.length()-1; i >= 0; i--){
            if(l[i] == '0'){
                l[i] = '1';
                break;
            }
            l[i] = '0';
        }
    }
    cout << l << endl;

    if(f){
        for(int i = l.length()-1; i >= 0; i--){
            if(l[i] == '0') mem *= 3;
            else    mem *= 2;
            mem %= waru;
        }
        ans -= mem;
        if(ans < 0) ans += waru;
    }

    cout << ans << endl;
}