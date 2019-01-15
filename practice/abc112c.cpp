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
 
ll n;
const int SIZE = 100+10;
ll x[SIZE],y[SIZE],h[SIZE];
ll p[SIZE][SIZE],pc[SIZE][SIZE];
int main(){
    cin >> n;
    for(int i = 0; i < n ; i++ )    cin >> x[i] >> y[i] >> h[i];

    for(int i = 0; i < n; i++){
        if(h[i] == 0)   continue;
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                p[j][k] = h[i]+abs(x[i]-j)+abs(y[i]-k);
            }
        }
    }

    for(int k = 0; k <= 100; k++){
        for(int l = 0; l <= 100; l++){
            bool flag = true;
            for(int i = 0; i < n; i++){
                if(max(p[k][l]-abs(k-x[i])-abs(l-y[i]),0*1LL) != h[i])  flag = false;    
            }

            if(flag){
                cout << k << ' ' << l << ' ' << p[k][l] << ' ' << endl;
                return 0;
            }
        }
    }

}