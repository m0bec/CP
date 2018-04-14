#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> PL;

const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;



struct edge{ll to, from, cost;};
edge e[2002];
ll d[1001];
bool neg[1001];
int n, m;



int main(){
    for(int i = 0; i < 1001; i++){
        d[i] = LL_INF;
    }
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> e[i].from >> e[i].to >> e[i].cost;
        e[i].cost = -e[i].cost;
    }
    d[1] = 0;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < m; i++){
            if(d[e[i].from] != LL_INF && d[e[i].to] > d[e[i].from] + e[i].cost){
                d[e[i].to] = d[e[i].from] + e[i].cost;
            }
        }
    }
    ll ans = d[n];
    for(int i = 0; i < 1001; i++)   neg[i] = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(d[e[j].from] == LL_INF)  continue;

            if(d[e[j].to] > d[e[j].from] + e[j].cost){
                d[e[j].to] = d[e[j].from] + e[j].cost;
                neg[e[j].to] = true;
            }

            if(neg[e[j].from]){
                neg[e[j].to] = true;
            }
        }

    }

    if(neg[n])  cout << "inf\n";
    else cout << -ans << endl;


}