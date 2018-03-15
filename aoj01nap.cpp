#include <bits/stdc++.h>
using namespace std;

int dp[101][10010];
int val[100], wei[100];

int main(){
    int n, w;
    cin >> n >> w;
    for(int i = 0; i < n; i++){
        cin >> val[i] >> wei[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= w; j++){
            if(j < wei[i]){
                dp[i+1][j] = dp[i][j];
            }
            else{
                dp[i+1][j] = max(dp[i][j-wei[i]] + val[i], dp[i][j]);
            }
        }
    }
    cout << dp[n][w] << endl;
}