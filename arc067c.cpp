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

ll n, ans;
const ll mo = 1E9+7;
ll mera[1001];

int main(){
    for(int i = 2; i <= 1000; i++){
        for(int j = 2; j <= 1000/i; j++){
            mera[i*j] = 1;
        }
    }

    vector<int> so, c;
    for(int i = 2; i <= 1000; i++){
        if(mera[i] == 0){
            so.push_back(i);
            c.push_back(0);
        }
    }


    cin >> n;
    ans = 1;
    ll mem, memj;

    for(int j = 1; j <= n; j++){
        memj = j;
        for(int i = 0; i < so.size(); i++){
            if(memj == 1)   break;
            while(memj%so[i] == 0){
                c[i]++;
                memj/=so[i];
            }
        }
    }

    for(int i = 0; i< c.size(); i++){
        ans *= c[i]+1;
        ans %= mo;
    }

    cout << ans << endl;
}