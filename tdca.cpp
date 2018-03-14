#include <bits/stdc++.h>
using namespace std;

int n;
int p[100];
int dp[10010] = {1};
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 10000; j >= p[i]; j--){
            dp[j] |= dp[j-p[i]];
        }
    }
    cout << count(dp, dp+10010, 1) << endl;
}