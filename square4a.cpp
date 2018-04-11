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

struct town{
    ll x,y,id;
};

struct edge{
    ll u, v, cost;
};

bool comp_c(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}
bool comp_x(const town& t1, const town& t2){
    return t1.x < t2.x;
}
bool comp_y(const town& t1, const town& t2){
    return t1.y < t2.y;
}

int n, mi, ma;
string s[100010], mema[100010],  memb[100010];

int main(){
    cin >> n;
    for(int i = 0; i <= n; i++){
        cin >> s[i];
        mema[i] = memb[i] = s[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < s[i].length(); j++){
            if(mema[i][j] == '?'){
                mema[i][j] = 'a';
                memb[i][j] = 'z';
            }
        }
    }

    sort(mema, mema+n);
    for(int i = 0; i < n; i++){
        if(s[n] <= mema[i]){
            ma = i+1;
            if(mema[i] == s[n]){
                for(int j = i+1; j < n; j++){
                    if(mema[j] == s[n]) ma = j+1;
                    else{
                        ma = j+1;
                        break;
                    }
                }
                if(mema[n-1] == s[n])   ma = n+1;
            }
            break;
        }
        if(i == n-1)    ma = n+1;
    }

    sort(memb, memb+n);
    for(int i = 0; i < n; i++){
        if(s[n] <= memb[i]){
            mi = i+1;
            break;
        }
        if(i == n-1)    mi = n+1;
    }

    cout << mi;
    for(int i = mi+1; i <= ma; i++){
        cout << ' ' << i; 
    }
    cout << endl;
}