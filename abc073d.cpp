#include <iostream>
#include <queue>
using namespace std;
const int INF = 100000000;
int g[201][201];
int r[9];
bool used[9];
int N,M,R,a,b,c, ans = INF;

void dfs(int dist, int past_town, int now_pos){
    if(past_town == R){
        if(ans > dist)  ans = dist;
        return;
    }
    else{
        for(int i = 1; i <= R; i++){
            if(!used[i]){
                used[i] = true;
                if(now_pos == -1)   dfs(0, past_town, r[i]);
                else    dfs(dist + g[now_pos][r[i]], past_town + 1, r[i]);
                used[i] = false;
            }
        }
    }
}

int main(){
    for(int i = 0; i < 9; i++) used[i] = false;
    for(int i = 0; i < 201; i++)
        for(int j = 0; j < 201; j++)    g[i][j] = INF;
    cin >> N >> M >> R;
    for(int i = 1; i <= R; i++)  cin >> r[i];
    for(int i = 1; i <= M; i++)  {
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = c;
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                if(g[j][k] > g[j][i]+g[i][k])
                    g[j][k] = g[j][i]+g[i][k];
            }
        }
    }
    dfs(0, 1, -1);
    cout << ans << '\n';
}