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

const int SIZE = 2e3+10;
ll n,m;
ll s[SIZE],t[SIZE];
ll mem[SIZE][SIZE], mem_sum[SIZE][SIZE];
ll mo = 1e9+7;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> t[i];
    }


    ll mem_sum;
    for(int i = 1; i <= n; i++){
        if(s[i] == t[1]) ++mem[i][1];
        mem[i][1] += mem[i-1][1];
    }
    for(int j = 2; j <= m; j++){
        if(s[1] == t[j]) ++mem[1][j];
        mem[1][j] += mem[1][j-1];
    }
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= m; j++){
            if(s[i] == t[j]){
                mem[i][j] += 2*(mem[i-1][j-1] + mem[i-2][j-2] - mem[i-1][j-2] - mem[i-2][j-1]);
                ++mem[i][j];
            }
            mem[i][j] += mem[i-1][j] + mem[i][j-1] - mem[i-1][j-1];
        }
    }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << mem[i][j] << ' ';
        }
        cout << endl;
    }

    ll ans = 0;
    /* 
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cout << i << ' ' << j << ' ' << mem[i][j] << endl;
            ans += mem[i][j];
            ans %= mo;
        }
    }
    */

   ans = mem[n][m] - mem[n-1][m] - mem[n][m-1] + mem[n-1][m-1];

    cout << ans << endl;
}