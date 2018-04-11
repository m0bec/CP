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

struct town{
    ll x,y,id;
};

struct edge{
    ll u, v, cost;
};

bool comp_c(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}
bool comp_x(const town& t1, const town& t2){
    return t1.x < t2.x;
}
bool comp_y(const town& t1, const town& t2){
    return t1.y < t2.y;
}

int n, ma, mb;
int a[50], b[50], c[50];
int dp[41][401][401];

int main(){
    cin >> n >> ma >> mb;
    for(int i = 0; i < n; i++)  cin >> a[i] >> b[i] >> c[i];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j < 401; j++){
            for(int k = 0; k < 401; k++){
                dp[i][j][k] = INT_INF;
            }
        }
    }
    dp[0][0][0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 401; j++){
            for(int k = 0; k < 401; k++){
                if(dp[i][j][k] == INT_INF)  continue;
                dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
                dp[i+1][j+a[i]][k+b[i]] = min(dp[i][j][k]+c[i], dp[i+1][j+a[i]][k+b[i]]);
            }
        }
    }

    int ans = INT_INF;
    for(int i = 1; i < 401; i++){
        for(int j = 1; j < 401; j++){
            if(ma*j == mb*i)    ans = min(ans, dp[n][i][j]);
        }
    }
    if(ans == INT_INF) ans = -1;
    cout << ans << endl;
}