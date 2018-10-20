#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 

int n;
int x[101],y[101];
ll h[101];
ll to[101][101];
ll mmm[101][101];

int main(){
    ll memem=-1;
    int ansx,ansy;
    ll ansh = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i] >> h[i];
        to[x[i]][y[i]] = h[i];
        mmm[x[i]][y[i]]++;
        if(memem <= 0) memem = h[i];
    }

    int lllll;
    for(int i = 0; i < n; i++){
        if(h[i] != 0){
            lllll = i;
            break;
        }
    }

    ll mem,mem2;
    int flag;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            flag = -1;
            mem2 = 0;
            mem = -1;
            mem = h[lllll] + abs(x[lllll]-i) + abs(y[lllll]-j);
            for(int k = 0; k < n; k++){
                if(to[x[k]][y[k]] != max(mem-abs(i-x[k])-abs(j-y[k]), 0*1LL)){
                    flag = k;
                    break;
                }
            }
            if(flag == -1){
                cout << i << ' ' << j << ' ' << mem << endl;
                return 0;
            }
        }
    }

}