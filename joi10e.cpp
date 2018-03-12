#include <bits/stdc++.h>
using namespace std;

char mem[1001][1001];
char mem2[1001][1001];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
int h, w, n;
struct mouse{
    int x,y,num, cheese;
};
int sx, sy;

int main(){
    cin >> h >> w >> n;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> mem[i][j];
            if(mem[i][j] == 'S'){
                sx = i;
                sy = j;
            }
            mem2[i][j] = mem[i][j];
        }
    }

    queue<mouse> que;
    mouse st;
    st.x = sx;st.y = sy; st.num = 0; st.cheese = 1;
    que.push(st);

    int ans = 2147483647-1;
    int xx, yy;
    for(int i = 1; i <= n; i++){
        ans = 2147483647-1;
        while(que.size()){
            mouse mou;
            mou = que.front();que.pop();
            for(int j = 0; j < 4; j++){
                mouse mou2;
                mou2.x = mou.x + dx[j];
                mou2.y = mou.y + dy[j];
                mou2.cheese = mou.cheese;
                mou2.num = mou.num + 1;
                if(mou2.x >= 0 && mou2.x < h && mou2.y >= 0 && mou2.y < w
                && mem[mou2.x][mou2.y] != 'X'){
                    if(mem[mou2.x][mou2.y] != '.'){
                        if((int)(mem[mou2.x][mou2.y]-'0') == mou2.cheese){
                            ans = min(ans, mou2.num);
                            xx = mou2.x;
                            yy = mou2.y;
                        }
                        else{
                            mem[mou2.x][mou2.y] = 'X';
                            que.push(mou2);
                        }
                    }
                    else{
                        mem[mou2.x][mou2.y] = 'X';
                        que.push(mou2);
                    }
                }
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                mem[i][j] = mem2[i][j];
            }
        }
        st.x = xx; st.y = yy; st.num = ans; st.cheese = i+1;
        que.push(st);
    }

    cout << ans << endl;;
}