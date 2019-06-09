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

    ll pos = 0;
    ll ans = 0;
    ll l_a_count = 0;
    ll r_bc_count = 0;
    ll s_length = s.length();
    ll ind = 0;

    while(ind < s_length){
        if(s[ind] == 'A'){
            ll i = ind+1;
            ll a_num = 1;
            ll bc_num = 0;
            ll mem = 0;
            while(i < s_length){
                if(s[i] == 'B' && s[i+1] == 'C'){
                    ++bc_num;
                    i += 2;
                }
                else if(s[i] == 'A'){
                    mem += a_num*bc_num;
                    bc_num = 0;
                    ++a_num;
                    ++i;
                }
                else{
                    break;
                }
            }
            ind = i;
            mem += a_num*bc_num;
            ans += mem;
        }
        else{
            ++ind;
        }
    }

    cout << ans << endl;
}