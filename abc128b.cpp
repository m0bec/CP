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
string s[101];
ll p[101],ind[101];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i] >> p[i];
        ind[i] = i;
    }

    ll ans[101];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[ind[i]] > s[ind[j]]){
                ll tmp = ind[i];
                ind[i] = ind[j];
                ind[j] = tmp;
            }
            else if(s[ind[i]] == s[ind[j]]){
                if(p[ind[i]] < p[ind[j]] ){
                    ll tmp = ind[i];
                    ind[i] = ind[j];
                    ind[j] = tmp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << ind[i]+1 << endl;
    }
}