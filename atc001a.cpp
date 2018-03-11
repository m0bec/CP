#include <bits/stdc++.h>
using namespace std;

int h, w;
char c[500][500];
bool flag = false;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve(){

}

int main(){
    pair<int, int> goal, start, st, ne;
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                start.first = i;
                start.second = j;
            }
            if(c[i][j] == 'g'){
                goal.first = i;
                goal.second = j;
            }
        }
    }

    queue<pair<int, int>> que;
    que.push(start);

    while(que.size()){
        st = que.front();
        que.pop();
        if(st.first == goal.first && st.second == goal.second){
            flag = true;
            break;
        }
        for(int i = 0; i < 4; i++){
            int sx = st.first + dx[i];
            int sy = st.second + dy[i];
            if(0 <= sx && sx < h && 0 <= sy && sy < w && c[sx][sy] != '#'){
                ne.first = sx;
                ne.second = sy;
                que.push(ne);
                c[sx][sy] = '#';
            }
        }
    }

    if(flag)    cout << "Yes\n";
    else    cout << "No\n";


}