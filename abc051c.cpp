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

int sx, sy, tx, ty;
string ans;

int main(){
    cin >> sx >> sy >> tx >> ty;
    
    int dx = tx-sx, dy = ty-sy;

    for(int i = 0; i < dy; i++) ans += 'U';
    for(int i = 0; i < dx; i++) ans += 'R';
    for(int i = 0; i < dy; i++) ans += 'D';
    for(int i = 0; i < dx; i++) ans += 'L';
    
    ans += 'L';
    for(int i = 0; i < dy+1; i++)   ans += 'U';
    for(int i = 0; i < dx+1; i++)   ans += 'R';
    ans += 'D';
    ans += 'R';
    for(int i = 0; i < dy+1; i++)   ans += 'D';
    for(int i = 0; i < dx+1; i++)   ans += 'L';
    ans += 'U';

    cout << ans << endl;
}