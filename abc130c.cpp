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

double w,h,x,y;
double ans,num;

int main(){
    cin >> w >> h >> x >> y;

    double mem1,mem2;
    if(w/2.0 == x && h/2.0 == y)    num = 1;

    ans = w*h/2;
    cout << fixed;
    cout << setprecision(10) << ans << ' ' << setprecision(0) << num << endl;
}