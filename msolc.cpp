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

ll n;
double a,b,c;
double ans;
double aa[100010], bb[100010];

int main(){
    cin >> n >> a >> b >> c;

    a /= 100.0;
    b /= 100.0;
    c /= 100.0;
    //A
    for(int i = 1; i <= n; i++){
        aa[i] = (i-1) + (  (pow(a,i) / (b+c)) * ((b+c) / ((1.0-b-c)*(1.0-b-c))) );
        //cout << aa[i] << endl;
    }
    for(int i = 1; i <= n; i++){
        bb[i] = (i-1) + (  (pow(b,i) / (a+c)) * ((a+c) / ((1.0-a-c)*(1.0-a-c))) );
    }

    for(int i = 0; i < n; i++){
        ans += aa[n]+bb[i];
        ans += bb[n]+aa[i];
    }

    cout << static_cast<ll>(ans) << endl;
}