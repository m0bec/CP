#include <iostream>
#include <algorithm>

using namespace std;

int N, M,a[51],b[51],g[51][51] = {}, ans = 0;
bool town[51], bri[51][51];

void dfs(int now_pos){
    town[now_pos] = true;
    for(int i = 1; i <= N; i++){
        if(g[now_pos][i] == 1 && !town[i]){
            dfs(i);
        }
    }
}

int main(){
    
    cin >> N >> M;
    for(int i = 1; i <= M; i++){
        cin >> a[i] >> b[i];
        g[a[i]][b[i]] = g[b[i]][a[i]] = 1;
    }
    
    for(int j = 1; j <= N; j++) town[j] = false;
    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++) town[j] = false;
        g[a[i]][b[i]] = g[b[i]][a[i]] = 0;
        town[1] = true;
        dfs(1);
        for(int j = 1; j <= N; j++){
            if(!town[j])    {++ans;break;}
        }
        g[a[i]][b[i]] = g[b[i]][a[i]] = 1;
        
    }

    cout << ans << '\n';
}