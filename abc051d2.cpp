#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;


class Node{
public:
       vector<int> to;
       vector<int> loot_cost;

       bool use = false;
       int cost = INT_INF;
       int from;

       void init(){
              use = false;
              cost = INT_INF;
       }
       
};

int n,m;
int a,b,c;
Node node[110];
int used[110],use_loot[110][110];

int main(){
       cin >> n >> m;

       for(int i = 0; i < m; i++){
 
                     cin >> a >> b >> c;
                     node[a].to.push_back(b);
                     node[b].to.push_back(a);
                     node[a].loot_cost.push_back(c);
                     node[b].loot_cost.push_back(c);
                     use_loot[a][b] = use_loot[b][a] = 1;
              
       }

       int now;
       for(int i = 0; i < n; i++){
       
       for(int j = 0; j < n; j++) node[j].init();
       node[i].use = true;
       int now_cost = 0;
       int lowest = INT_INF;
       int keep;
       now = i;
       for(int j = 0; j < n; j++){
              if(node)
              while(!node[j].use){
                     lowest = INT_INF;
                     keep = j;
                     for(int k = 0; k < node[now].to.size(); k++){
                            if(!node[now].use) continue;
                            if(node[node[now].to[k]].cost > now_cost+node[now].loot_cost[k]){
                                   node[node[now].to[k]].cost = now_cost+node[now].loot_cost[k];
                                   node[node[now].to[k]].from = now;
                            }
                            
                            if(lowest > now_cost+node[now].loot_cost[k]){
                                   lowest = now_cost+node[now].loot_cost[k];
                                   keep = node[now].to[k];
                            }
                     }
                     if(keep == j) now = j;
                     now_cost = node[keep].cost;
                     node[keep].use = true;
                     use_loot[keep][node[keep].from] = use_loot[node[keep].from][keep] = 0;
                     now = keep;
                     cout << node[now].from << ' ' << now << endl;
              }
       }
       }

       int ans = 0;
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     ans += use_loot[i][j];
              }
       }
       cout << ans/2 << endl;
}