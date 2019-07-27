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

ll gcd(ll a, ll b){
    ll tmp;
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}

ll a,b,c,d;
ll mem_a[2],mem_b[2],mem_sum[2],ans;

int main(){
    cin >> a >> b >> c >> d;

    mem_a[0] = (a-1)/c;
    mem_a[1] = b/c;
    mem_b[0] = (a-1)/d;
    mem_b[1] = b/d;

    ll sum_ = c*d/gcd(max(c,d),min(c,d));
  //  cout << sum_ << endl;
    mem_sum[0] = (a-1)/sum_;
    mem_sum[1] = b/sum_;

    ans = mem_a[1]+mem_b[1]-mem_sum[1];
    ans -= mem_a[0]+mem_b[0]-mem_sum[0];
    ans = b-(a-1)-ans;

    cout << ans << endl;

}