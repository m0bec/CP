#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
char ma[100][100];
bool f[100][100];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,-1,0};
pair<int, int> p;

int main(){
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            ma[i][j] = '1';
        }
    }

    queue<pair<int, int>> que;
    p.first = 0;
    p.second = 0;
    que.push(p);

    while(que.size()){
        
    }

}