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
const int SIZE = 1e5+10;
ll v[SIZE],mem[SIZE];

pair<ll,ll> va[SIZE],vb[SIZE];

int main(){
    cin >> n;
    ll vvv;
    for(int i = 0; i < n; i++){
        cin >> vvv;
        if(i%2 == 0){
            va[vvv].first++;
            va[vvv].second = vvv;
        }
        else{
            vb[vvv].first++;
            vb[vvv].second = vvv;
        }
    }

    sort(va,va+SIZE);
    sort(vb,vb+SIZE);

    ll ac = SIZE-1,bc = SIZE-1;
    ll ans = 0;
    ans = va[ac].first+vb[bc].first;
    if(va[ac].second == vb[bc].second){
        ans = max(va[ac].first+vb[bc-1].first,va[ac-1].first+vb[bc].first);
    }

    cout << n-ans << endl;
}