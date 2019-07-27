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
ll p[100];
ll conv[3];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    ll ans = 0;

    for(int i = 0; i < n-2; i++){
        conv[0] = p[i];
        conv[1] = p[i+1];
        conv[2] = p[i+2];
        sort(conv,conv+3);
        if(conv[1] == p[i+1])   ++ans;
    }

    cout << ans << endl;
}