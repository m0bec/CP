#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;
vector<int> mem[13];
int memo[13][13];
int memomemo[13][13], menb[13];
int ans;

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        memo[x][y] = memo[y][x] = 1;
    }
    int upper = 1;
    for(int i = 0; i < n; i++)  upper *= 2;

    bool flag = true;
    int cnt = 0;
    for(int i = 0; i < upper; i++){
        flag = true;
        cnt = 0;
        for(int j = 0; j <= n; j++){
            if(i & (1<<j)){
                ++cnt;
                for(int k = j+1; k <= n; k++){
                    if(i & (1<<k)){
                        if(memo[(int)log2(1<<j)+1][(int)log2(1<<k)+1] != 1) flag = false;
                    }
                }
            }
        }
        if(flag){
            ans = max(ans, cnt);
        }
    }
    cout << ans <<endl;
}