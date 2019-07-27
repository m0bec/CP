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

ll p[3];

int main(){
    cin >> p[0] >> p[1] >> p[2];

    ll ans = LL_INF;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(ans > p[i]+p[j])ans = p[i]+p[j];
        }
    }
    cout << ans << endl;

}