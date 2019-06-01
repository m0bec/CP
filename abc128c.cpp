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

ll n,m;
ll k[100];
ll s[100][100],ss[20][20];
ll p[100];
ll swit[20];
ll ans;
ll ccc;
void solve(int num){
    if(num != n){
    swit[num] = 0;
    solve(num+1);
    swit[num] = 1;
    solve(num+1);
    }
    else{
    ll cou;
    bool f = true;
    for(int i = 0; i < m; i++){
        cou = 0;
        for(int j = 1; j <= n; j++){

            if(ss[i][j] == swit[j-1] && ss[i][j] == 1) ++cou;
        }
        if(p[i] != cou % 2) f = false;
    }
    if(f) ++ans;
    ++ccc;
    }

    return;
}


int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> k[i];
        for(int j = 0; j < k[i]; j++){
            cin >> s[i][j];
            ss[i][s[i][j]] = 1;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> p[i];
    }

    solve(0);
    cout << ans << endl;
}