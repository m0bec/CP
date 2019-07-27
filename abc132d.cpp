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

ll n,k;
ll ama = 1e9+7;
ll nb[2010];
ll dp[2020][2020];
ll dp2[2020][2020];

void set_dp(){
    dp[0][0] = 1;
    for(int i = 1; i <= 4; i++){
        for(int j = 0; j <= 4; j++){
            if(j-i >= 0){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % ama;
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
            dp2[i][j] = (dp2[i][j] + dp[i-1][j]) % ama;
        }
    }
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= 4; j++){
                        cout << i << ' ' << j << ' ' << dp[i][j] << ' ' << dp[i][j]-dp2[i][j] << endl;
        }
    }
    cout << dp[2][3] << endl;
}

int main(){
    cin >> n >> k;
    nb[0] = 1;
    for(int i = 2; i <= n; i++){
        nb[i-1] = nb[i-2]*i;
        nb[i-1] %= ama;
    }

    set_dp();
    for(int i = 1; i <= k; i++){

    }
}