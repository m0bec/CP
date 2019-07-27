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

const int SIZE = 1e5+10;
ll n, m;
ll a[SIZE];
ll mem[SIZE];

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a[i];
        mem[a[i]] = -1;
    }

    mem[0] = 1;
    for(int i = 0; i < n+1; i++){
        if(mem[i] != -1) mem[i] = mem[i] % 1000000007;
        if(mem[i+1] != -1)  mem[i+1] = mem[i+1] % 1000000007;
        if(mem[i+2] != -1) mem[i+2] = mem[i+2] % 1000000007;

        if(mem[i] == -1)    continue;
        if(mem[i+1] != -1)  mem[i+1] += mem[i];
        if(mem[i+2] != -1)  mem[i+2] += mem[i];
    }

    cout << mem[n] << endl;
}