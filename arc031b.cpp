#include <bits/stdc++.h>
using namespace std;

char a[10][10];
char mem[10][10];
bool flag = false;
int ans;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve(int i_, int j_){
        int sti, stj;
        for(int i = 0; i < 4; i++){
            sti = i_ + dx[i];
            stj = j_ + dy[i];
            if(sti >= 0 && sti < 10 && stj >= 0 && stj <10 && a[sti][stj] == 'o'){
                a[sti][stj] = 'x';
                solve(sti, stj);
            }
        }
}

int main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++) cin >> mem[i][j];
    }

    ans = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            flag = true;
            if(mem[i][j] != 'o'){
                for(int k = 0; k < 10; k++)
                    for(int l = 0; l < 10; l++) a[k][l] = mem[k][l];
                a[i][j] = 'o';
                solve(i,j);
                for(int k = 0; k < 10; k++){
                    for(int l = 0; l < 10; l++){
                        if(a[k][l] == 'o')    flag = false;
                    }
                }
                if(flag){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}