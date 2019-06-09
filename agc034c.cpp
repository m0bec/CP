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

ll n,x;
const int SIZE = 1e5+10;
ll b[SIZE],l[SIZE],u[SIZE];

int main(){
    cin >> n >> x;
    ll mem_l_max = 0;
    ll mem_sum = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i] >> l[i] >> u[i];
        mem_sum += b[i]*l[i];
        mem_l_max = max(u[i],mem_l_max);
    }

    cout << mem_sum << ' ' << mem_sum/mem_l_max << endl;
    
}