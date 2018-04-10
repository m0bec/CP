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


//Kruskal---------------------------------------------------
struct edge{
    ll u, v, cost;
};

bool comp_c(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}

edge es[200001];

class Kruckal{
    int n;
    int par[100001];
    int ran[100001];

    void init_union_find(int n){
        for(int i = 0; i < n; i++){
            par[i] = i;
            ran[i] = 0;
        }
    }

    int find(int x){
        if(par[x] == x){
            return x;
        }
        else{
            return par[x] = find(par[x]);
        }
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y)  return;
        if(ran[x] < ran[y]){
            par[x] = y;
        }
        else{
            par[y] = x;
            if(ran[x] == ran[y])    ran[x]++;
        }
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }

    int solve(){
        sort(es, es+2*n-2, comp_c);
        init_union_find(n);
        int res = 0;
        for(int i = 0; i < 2*n-2; i++){
            edge e = es[i];
            if(!same(e.u, e.v)){
                unite(e.u, e.v);
                res += e.cost;
            }
        }
    }
}
//------------------------------------------------------------------
//warshall_floyd----------------------------------------------------
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
//--------------------------------------------------------------------
