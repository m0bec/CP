#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

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

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

ll d, n;
double x[100][100];

int main(){
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> x[i][j];
        }
    }


    double tmp;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            tmp = 0.0;
            for(int k = 0; k < d; k++){
                tmp += (x[i][k]-x[j][k]) * (x[i][k]-x[j][k]);
            }
        ll mem = tmp;
        mem = sqrt(mem);
        tmp = sqrt(tmp);
        if(abs((double)mem - tmp) <= 0.00001)    ++ans;
        }
    }
    cout << ans << endl;
}