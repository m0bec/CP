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

int n;
int f[101][11], p[101][12], co[101];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            cin >> f[i][j];
            if(f[i][j] == 1)    co[i]++;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 11; j++){
            cin >> p[i][j];
        }
    }
    int membit = 1;
    int cou;
    long long ans = -9223372036854775807, memans = 0;
    for(int i = 1; i < 1024; i++){
        for(int j = 0; j < n; j++){
            cou = 0;
            for(int k = 0; k < 10; k++){
                if(i & (1 << k)){
                    cou += f[j][k];
                }
            }
            memans += p[j][cou];
        }
        ans = max(ans, memans);
        memans = 0;
    }
    cout << ans << endl;
}