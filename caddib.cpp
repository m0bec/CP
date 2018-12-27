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
 
ll n,h,w;
ll a,b;
string s;
ll ans;
int main(){
    cin >> n >> h >> w;
    for(int i = 0; i < n; i++){
           cin >> a >> b;
           if(a >= h && b >= w)     ++ans;
    }
    cout << ans << endl;
}