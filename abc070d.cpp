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
 
int n, q, k, x[100010], y[100010];
int a[100010], b[100010], c[100010];
struct edge{int to; ll cost;};

vector<edge> g[100001];
ll d[100010];

int main(){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        edge mem_edge;
        cin >> a[i] >> b[i] >> c[i];
        mem_edge.to = b[i];
        mem_edge.cost = c[i];
        g[a[i]].push_back(mem_edge);
        mem_edge.to = a[i];
        g[b[i]].push_back(mem_edge);
    }
    cin >> q >> k;

    for(int i = 0; i < q; i++){
        cin >> x[i] >> y[i];
    }

    priority_queue<P, vector<P>, greater<P>> que;
    for(int i = 0; i < n+1; i++)  d[i] = LL_INF;
    d[k] = 0;
    que.push(P(0, k));

    while(!que.empty()){
        Pl p = que.top(); que.pop();
        int v = p.second;
        if(d[v] < p.first)  continue;
        for(int i = 0; i < g[v].size(); i++){
            edge e = g[v][i];
            if(d[e.to] > d[v]+e.cost * 1LL){
                d[e.to] = d[v] + e.cost*1LL;
                que.push(P(d[e.to], e.to));
            }
        }
    }

    for(int i = 0; i < q; i++)  cout << d[x[i]]+d[y[i]] << endl;
}