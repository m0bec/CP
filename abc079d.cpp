#include <bits/stdc++.h>
using namespace std;
 
bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 
int h,w;
long long dp[10][10];
long long a[200][200];

void solve(){
    for(int k = 0; k < 10; k++){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }
}

int main(){
    cin >> h >> w;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> dp[i][j];
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++)  cin >> a[i][j];
    }

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i != j)  solve();
        }
    }
    

    long long ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] != -1){
                ans += dp[a[i][j]][1];
            }
        }
    }
    cout << ans << endl;
}