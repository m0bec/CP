#include <bits/stdc++.h>
using namespace std;

int h, w;
int whitenum;
char mem[50][50];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

struct sunuke{
    int x, y, num;
};

int main(){
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> mem[i][j];
            if(mem[i][j] == '.')    whitenum++;
        }
    }

    queue<sunuke> que;
    sunuke st;
    int ans = 100000;
    bool flag = false;
    st.x = 0; st.y = 0; st.num = 0;
    que.push(st);
    while(que.size()){
        sunuke memo;
        memo = que.front();que.pop();
        for(int i = 0; i < 4; i++){
            int nex, ney;
            nex = memo.x + dx[i];
            ney = memo.y + dy[i];
            if(nex >= 0 && nex < h && ney >= 0 && ney < w && mem[nex][ney] != '#'){
                if(nex == h-1 && ney == w-1){
                    ans = min(ans, memo.num+1);
                    flag = true;
                }
                else{
                    sunuke pmemo;
                    pmemo.x = nex;
                    pmemo.y = ney;
                    pmemo.num = memo.num + 1;
                    que.push(pmemo);
                    mem[nex][ney] = '#';
                }
            }
        }
    }
    if(!flag)   cout << "-1\n";
    else    cout << whitenum - ans - 1 << endl;
}