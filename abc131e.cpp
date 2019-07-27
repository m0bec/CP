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

ll n,k;
ll max_num;
struct gr{
    ll rin_num;
    ll up_rin;
    ll low_rin;
};
ll graph[110][110];
gr gra_data[110];

void solve(ll add_p){

}

int main(){
    cin >> n >> k;
    max_num = 0;
    for(int i = 1; i <= n-2; i++){
        max_num += i;
    }

    if(k > max_num){
        cout << "-1\n";
        return 0;
    }

    ll cou = n-1;
    cou += max_num-k;

    cout << cou << endl;

    for(int i = 2; i <= n; i++){
        cout << "1 " << i << endl;
    }

    ll num = max_num-k;
    ll st = 2,st_cou = 3;
    while(num != 0){
        if(st_cou > n){
            ++st;
            st_cou = st+1;
        }
        cout << st << " " << st_cou << endl; 
        ++st_cou;
        --num;
    }


}