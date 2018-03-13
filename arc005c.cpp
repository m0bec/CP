#include <bits/stdc++.h>
using namespace std;

int h, w;
int whitenum;
char c[500][500];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

struct taka{
    int x, y, num;
};
int main(){
    cin >> h >> w;
    taka st, go;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                st.x = i;
                st.y = j;
                st.num = 2;
            }
            if(c[i][j] == 'g'){
                go.x = i;
                go.y = j;
            }
        }
    }
    deque<taka> que;
    que.push_front(st);
    while(que.size()){
        taka mem;
        int nex, ney;
        mem = que.front(); que.pop_front();
        for(int i = 0; i < 4; i++){
            taka pmem;
            nex = mem.x + dx[i];
            ney = mem.y + dy[i];
            if(nex >= 0 && nex < h && ney >= 0 && ney < w){
                if(c[nex][ney] == 'g'){
                    cout << "YES\n";
                    return 0;
                }
                else if(c[nex][ney] == '#'){
                    if(mem.num > 0){
                        pmem.x = nex;
                        pmem.y = ney;
                        pmem.num = mem.num - 1;
                        que.push_back(pmem);
                    }
                }
                else{
                    pmem.x = nex;
                    pmem.y = ney;
                    pmem.num = mem.num;
                    que.push_front(pmem);
                    c[nex][ney] = '#';
                }
            }
        }
    }
    cout << "NO\n";
}