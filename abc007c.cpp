#include <bits/stdc++.h>
using namespace std;
char ma[51][51];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
int ans = 1000000;
struct are{
    int x, y, num;
};
int main(){
    queue<are>que;
    int r, c;
    int sx, sy, gx, gy;
    cin >> r >> c;
    cin >> sx >> sy;
    cin >> gx >> gy;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> ma[i][j];
        }
    }

    are mem;
    mem.x = sx-1; mem.y = sy-1; mem.num = 0;
    que.push(mem);

    while(que.size()){
        are memo, memo2;
        int xx, yy;
        memo = que.front();que.pop();
        for(int i = 0; i < 4; i++){
            xx = memo.x + dx[i];
            yy = memo.y + dy[i];
            if(xx == gx-1 && yy == gy-1){
                ans = min(ans, memo.num+1);
            }
            if(ma[xx][yy] != '#' && xx >= 0 && xx < r
            && yy >= 0 && yy < c){
                memo2.x = xx;
                memo2.y = yy;
                memo2.num = memo.num + 1;
                que.push(memo2);
                ma[xx][yy] = '#';
            }
        }
    }

    cout << ans << endl;
}