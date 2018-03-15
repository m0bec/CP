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


int dp[100010];
int n;
pair<int, int> wh[100010];


int solve(int i_){
    if(wh[i_].first != wh[i_+1].first)    *lower_bound(dp, dp+n, wh[i_].second) = wh[i_].second;
    else{
        
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> wh[i].first >> wh[i].second;
    }
    sort(wh, wh+n);
    int ans = 0;
    int cou = 0;
    for(int i = 0; i < n; i++){
        if(wh[i].first == wh[i+1].first){
            cou++;
        }
        else{
            if(cou != 0){
                sort(wh+i-cou, wh+i+1, SecondCompareDes);
            }
            cou = 0;
        }
    }
    for(int i = 0; i < n; i++){
        dp[i] = 1000000;
    }
    for(int i = 0; i < n; i++){
        *lower_bound(dp, dp+n, wh[i].second) = wh[i].second;
    }
    for(int i = 0; i < n; i++){
        if(dp[i] != 1000000)    ++ans;
    }
    cout << ans << endl;
}