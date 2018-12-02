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


ll h,w,k;
ll ami[101][10];
ll mem;

ll cal(ll jjj){
    if(jjj == 0)    return 1;
    else if(jjj == 1)   return 1;
    else if(jjj == 2)   return 2;
    else if(jjj == 3)   return 3;
    else if(jjj == 4)   return 6;
    else if(jjj == 5)   return 8;
    else if(jjj == 6)   return 13;
    else if(jjj == 7)   return 21;
    else return 1;
}

int main(){
    cin >> h >> w >> k;

    ami[0][0] = 1;
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            mem = 1;
            for(int jj = j-1; jj <= j+1; jj++){
                mem = 1;
                if(jj >= 0 && jj < w){
                if(jj != j){
                    mem *= ami[i][jj] * cal(min(j,jj)-1);
                    mem %= 100000007;
                    mem *= ami[i][jj] * cal(w-1-max(j,jj));
                    mem %= 100000007;
                }
                else{
                    mem *= ami[i][j] * cal(j-1);
                    mem %= 100000007;
                    mem *= ami[i][j] * cal(w-1-j);
                    mem %= 100000007;
                }
                }
                if(mem != 0){
                    if(ami[i+1][j]== 0) ami[i+1][j] = 1;
                    ami[i+1][j] *= mem;
                    mem %= 100000007;
                }
            }
        }
    }
    cout << ami[h][k-1] << endl;
}