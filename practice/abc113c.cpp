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
 
ll n,m;
const int SIZE = 1e5+10;
ll p[SIZE],y[SIZE];
pair<ll,pair<ll,ll>> pa[SIZE];
string ans[SIZE];
ll cou[SIZE];
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> p[i] >> y[i];
        pa[i].first = y[i];
        pa[i].second.first = p[i];
        pa[i].second.second = i;
    }

    sort(pa,pa+m);

    string mem1,mem2;
    ll befor = 0;
    for(int i = 0; i < m; i++){
        ++cou[pa[i].second.first];
        mem1 = to_string(pa[i].second.first);
        mem2 = to_string(cou[pa[i].second.first]);
        for(int j = 0; j < 6-mem1.length(); j++)    ans[pa[i].second.second] += '0';
        ans[pa[i].second.second] += mem1;
        for(int j = 0; j < 6-mem2.length(); j++)    ans[pa[i].second.second] += '0';
        ans[pa[i].second.second] += mem2;
    }

    for(int i = 0; i < m; i++){
        cout << ans[i] << endl;
    }

}