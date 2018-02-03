#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int H,W,ans=0;
    char S[52][52]={};
    int checkx[8] = {-1,0,1,-1,1,-1,0,1}, checky[8] = {1,1,1,0,0,-1,-1,-1};

    cin >> H >> W;
    for(int i = 1; i < H+1; i++){
        for(int j = 1; j < W+1; j++){
            cin >> S[i][j];
        }
    }

    for(int i = 1; i < H+1; i++){
        for(int j = 1; j < W+1; j++){
            if(S[i][j] == '#'){}
            else{
                for(int k= 0; k < 8; k++){
                    if(S[i+checkx[k]][j+checky[k]] == '#'){
                        ans += 1;
                    }
                }
                S[i][j] = '0' + ans;
                ans = 0;
            }
        }
    }

    for(int i = 1; i < H+1; i++){
        for(int j = 1; j < W+1; j++){
            cout << S[i][j];
        }
        cout << '\n';
    }
}