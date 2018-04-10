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

int dp[110][110];
int ans;
int n, m;

void warshall_floyd(int edge_num){
    for(int k = 0; k < edge_num; k++){
        for(int i = 0; i < edge_num; i++){
            for(int j = 0; j < edge_num; j++){
                if(dp[i][j] > (dp[i][k]+dp[k][j])){
                    dp[i][j] = dp[i][k]+dp[k][j];
                }
            }
        }
    }
}

int main(){
    for(int i = 0; i < 110; i++){
        for(int j = 0; j < 110; j++){
            dp[i][j] = INT_INF/2-100;
        }
    }
    for(int i = 0; i < 110; i++){
        dp[i][i] = 0;
    }

    cin >> n >> m;
    int a[1000],b[1000], c[1000];
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i] >> c[i];
        --a[i];
        --b[i];
        dp[a[i]][b[i]] = dp[b[i]][a[i]] = c[i];
    }

    warshall_floyd(n);

    ans = m;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(dp[j][a[i]] + c[i] == dp[j][b[i]]){
                --ans;
                break;
            }
        }
    }
    cout << ans << endl;
}