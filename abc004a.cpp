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
 
const int size = 1e5+10;
ll a[3];


int main(){
    bool f = false;
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        if(a[i]%2 == 0) f = true;
    }
    sort(a,a+3);
    ll ans = a[0]*a[1];
    if(f)  ans = 0;
    cout << ans << endl;
}