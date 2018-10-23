#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll , ll> P;
typedef pair<ll, ll> PL;
const ll INT_INF = 2147483646;
const ll ll_INF = 9223372036854775807;
ll mod = 1e9+7;

bool SecondCompare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second>b.second;
}

int h,w;
int a[510][510];
int c;
int ans[300000][4];
int main(){
    cin >> h >> w;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= h; i++){
        if(i%2 == 1){
            for(int j = 1; j <= w; j++){
                if(a[i][j] % 2 != 0){
                    if(j != w){
                        ans[c][0] = i;
                        ans[c][1] = j;
                        ans[c][2] = i;
                        ans[c][3] = j+1;
                        ++a[i][j+1];
                    }
                    else{
                        if(i == h)  break;
                        ans[c][0] = i;
                        ans[c][1] = j;
                        ans[c][2] = i+1;
                        ans[c][3] = j;
                        ++a[i+1][j];                        
                    }
                    ++c;
                }
            }
        }
        else{
            for(int j = w; j >= 1; j--){
                if(a[i][j] % 2 != 0){
                    if(j != 1){
                        ans[c][0] = i;
                        ans[c][1] = j;
                        ans[c][2] = i;
                        ans[c][3] = j-1;
                        ++a[i][j-1];
                    }
                    else{
                        if(i == h)  break;
                        ans[c][0] = i;
                        ans[c][1] = j;
                        ans[c][2] = i+1;
                        ans[c][3] = j;
                        ++a[i+1][j];                        
                    }
                    ++c;
                }
            }
        }
    }

    cout << c << endl;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < 3; j++){
            cout << ans[i][j] << ' ';
        }
        cout << ans[i][3] << '\n';
    }
}