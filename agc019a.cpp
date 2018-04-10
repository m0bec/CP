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


struct ice{
    ll yen, id;
    ll yy;
};
bool comp(const ice& i1, const ice& i2){
    return i1.yy < i2.yy;
}
ice q[4];
ll n;
double qq[4];

int main(){
    for(int i = 0; i < 4; i++){
        cin >> q[i].yen;
    }
    cin >> n;

    q[0].id = 1;
    q[0].yen *= 4;
    q[1].id = 1;
    q[1].yen *= 2;
    q[2].id = 1;
    q[3].id = 2;
    for(int i = 0; i < 4; i++){
        q[i].yy = q[i].yen/q[i].id;
    }
    
    sort(q, q+4, comp);

    ll ans = 0;
    for(int i = 0; i < 4; i++){
        ans += (n/q[i].id)*q[i].yen;
        n -= (n/q[i].id)*q[i].id;
    }
    cout << ans << endl;
}