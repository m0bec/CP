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
ll ans;

void solve(ll val, bool f1, bool f2, bool f3){
    if(val <= n){
        if(f1 && f2 && f3)  ++ans;
        solve(val*10+7,true,f2,f3);
        solve(val*10+5,f1,true,f3);
        solve(val*10+3,f1,f2,true);
    }
}


int main(){
    cin >> n;
    solve(7,true,false,false);
    solve(5,false,true,false);
    solve(3,false,false,true);

    cout << ans << endl;
}