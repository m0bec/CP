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

edge es[200001];
town towns[100001];
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

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> towns[i].x >> towns[i].y;
        towns[i].id = i;
    }

    sort(towns, towns+n, comp_x);
    for(int i = 1; i < n; i++){
        es[i-1].cost = towns[i].x-towns[i-1].x;
        es[i-1].u = towns[i].id;
        es[i-1].v = towns[i-1].id;
    }
    
    sort(towns, towns+n, comp_y);
    for(int i = 1; i < n; i++){
        es[i+n-2].cost = towns[i].y-towns[i-1].y;
        es[i+n-2].u = towns[i].id;
        es[i+n-2].v = towns[i-1].id;
    }


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
    cout << res << endl;

    
}