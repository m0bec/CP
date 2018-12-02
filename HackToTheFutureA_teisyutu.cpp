#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;

const int TEST = 1;
int L,R,N,M;
char S[501][301],ans[30][30][TEST+1];

int mem[30][30][3],cou[30][30][TEST];
int movex[4] = {0,1,0,-1},movey[4] = {-1,0,1,0};
int move_dir;
int score_mem[TEST],max_score, max_score_num;
int mem_max,maxx,maxy;

struct pos{
    int x=14;
    int y=14;
};

int main(){
    cin >> N >> M >> L;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < L; j++)  cin >> S[i][j];
    }

    for(int k = 0; k < TEST; k++){
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M; j++){
                ans[i][j][k] = '.';
            }
        }
    }
    for(int k = 0; k < TEST; k++){
        for(int j = 0; j < M; j++){
            ans[0][j][k] = ans[M-1][j][k] = ans[j][0][k] = ans[j][M-1][k] = '#';
        }
    }


    ofstream ofs("./HackToTheFuture/test.data");
    ofstream ofs2("./HackToTheFuture/output.dat");
    ofstream ofs3("./HackToTheFuture/root.dat");
//keiro
    pos now_pos;
    for(int ii = 0; ii < TEST; ii++){
    int loop = 0;
    for(int i = 0; i < N; i++){
        now_pos.x = now_pos.y = 14;
        move_dir = 0;
        for(int j = 0; j < L; j++){
            if(S[i][j] == 'S'){
                    now_pos.x += movex[move_dir];
                    now_pos.y += movey[move_dir];
                    if(ans[now_pos.x][now_pos.y][ii] == '#'){
                        now_pos.x -= movex[move_dir];
                        now_pos.y -= movey[move_dir];
                    }
            }
            else if(S[i][j] == 'L'){
                    --move_dir;
                    if(move_dir == -1)   move_dir = 3;
            }else if(S[i][j] == 'R'){
                    ++move_dir;
                    if(move_dir == 4)  move_dir = 0;
            }
            ofs3 << i << ' ' << now_pos.x << ' ' << now_pos.y << ' ' << S[i][j] << ' ' << move_dir<< endl;

        }
                    
        ++cou[now_pos.x][now_pos.y][ii];
        //ofs3 << i << ' ' << now_pos.x << ' ' << now_pos.y << endl;
        if(now_pos.x == 22 && now_pos.y == 1)   cout <<"out:"<< i << endl;
    }

    mem_max = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            if(cou[i][j][ii] == 1)  score_mem[ii] += 10;
            else if(cou[i][j][ii] == 2) score_mem[ii] += 3;
            else if(cou[i][j][ii] == 3) score_mem[ii] += 1;
            if(mem_max < cou[i][j][ii]){
                mem_max = cou[i][j][ii];
                maxx = i;
                maxy = j;
            }
        }
    }
    
    cout << score_mem[ii] << ' ' << ii << endl;
    if(score_mem[max_score_num] <= score_mem[ii]){
        max_score_num = ii;
    }
    for(int i = ii+1; i < TEST; i++){
        if(maxx == 14 && maxy == 14) ++maxx;
        ans[maxx][maxy][i] = '#';
    }
    }
    
    cout << "max_score " << score_mem[max_score_num] << endl;
 
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            cout << ans[i][j][max_score_num];
        }
        cout << endl;
    }
    max_score_num = 0;
    int test_ = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            ofs << i << ' ' << j << ' ' << cou[i][j][max_score_num] << endl;
            test_ += cou[i][j][max_score_num];
          ofs2 << ans[i][j][max_score_num];
        }
//        ofs << endl;
        ofs2 << endl;
    }
    cout << test_ << endl;
}