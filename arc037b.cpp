#include <bits/stdc++.h>
using namespace std;

int tr[101][101];
int go[101];
int n, m, u, v;
int ans;
bool flag;
void solve(int i_){
    go[i_] = 1;
        for(int i = 1; i <= n; i++){
            if(tr[i_][i] == 1){
                tr[i_][i] = tr[i][i_] = 0;
                if(go[i] != 1) solve(i);
                else flag = false;
            }
        }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        tr[u][v] = tr[v][u] = 1;
    }
    for(int i = 1; i <= n; i++){
        flag = true;
        if(go[i] != 1){
            solve(i);
            if(flag) ++ans;
        }
    }
    cout << ans << endl;
}