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

string s;

int main(){
    cin >> s;
    ll ans = 2*(s.length()-1);
    for(int i = 1; i < s.length()-1; i++){
        if(s[i] == 'D'){
            ans += i;
            ans += 2*(s.length()-1-i);
        }
        else{
            ans += 2*i;
            ans += s.length()-1-i;
        }
    }

    cout << ans << endl;
}