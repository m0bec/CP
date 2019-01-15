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
 
ll a,b,c;
string s;

int main(){
    cin >> a >> b >> c;

    ll ans = 0;
    if(b >= c-1){
        ans = b+c;
    }
    else{
        if(a+b >= c-1){
            ans = b+c;
        }
        else{
            ans = b*2+a+1;
        }
    }
    cout << ans << endl;
}