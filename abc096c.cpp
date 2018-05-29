#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

int h, w;
char s[51][51];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

int main(){
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                bool flag = false;
                for(int k = 0; k < 4; k++){
                    if(i+dx[k] >= 0 && h > i+dx[k] && j+dy[k] >= 0 && j+dy[k] < w){
                        if(s[i+dx[k]][j+dy[k]] == '#'){
                            flag = true;
                        }
                    }
                }
                if(!flag){
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes\n";
}