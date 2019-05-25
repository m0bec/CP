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

const int SIZE = 2e5;
int n;
pair<ll,ll> a[SIZE];

int main(){
    cin >> n;
    ll tmp1,tmp2;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    } 


    //sort(a,a+n);

    pair<ll,ll> ans = a[0];
    ll ans_num = 0;
    ll t1,t2;
    bool f = false;
    for(int i = 1; i < n; i++){
        t1 = a[i].first/ans.second;
        t2 = ans.first/a[i].second;
        // cout << t1 << ' ' << t2 << endl;
        if(a[i].first%ans.second != 0)    ++t1;
        if(ans.first%a[i].second != 0) ++t2;

    //cout << t1 << ' ' << t2 << endl;
        if(t1 == t2){
            ans_num = i;
            ans = a[i];
            f = true;
        }
        if(t2 > t1){
            ans = a[i];
            ans_num = i;
            f = false;
        }
    }

    if(f) ans_num = -1;
    cout << ans_num+1 << endl;
    
}