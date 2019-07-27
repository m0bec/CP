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
const int SIZE = 100+10;
ll v[SIZE];
ll mem_arr[SIZE],r_sum[SIZE],l_sum[SIZE];
ll ans;

void solve(ll dust_num, ll in_num){
    ll tmp_ans;
    if(in_num > n)  in_num = n;
    for(int r_num = 0; r_num <= in_num; r_num++){
        int l_num = in_num-r_num;
        tmp_ans = 0;
        for(int i = 0; i < r_num; i++){
            mem_arr[i] = v[i];
            tmp_ans += v[i];
        }
        for(int i = 0; i < l_num; i++){
            mem_arr[r_num+i] = v[n-1-i];
            tmp_ans += v[n-1-i];
        }
        sort(mem_arr,mem_arr+in_num);
        for(int i = 0; i < dust_num; i++){
            if(mem_arr[i] < 0)  tmp_ans -= mem_arr[i];
            else    break;
        }

       // cout << r_num << ' ' << l_num << ' ' << tmp_ans << endl;
        ans = max(ans,tmp_ans);
    }
}


int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        r_sum[i] += v[i];
    }

    for(int i = 0; i < n; i++){
        l_sum[i] += v[n-1-i];
    }

    ll score = 0, l_pos = 0, r_pos = n-1;

    for(int i = 0; i <= k/2; i++){
        solve(i,k-i);
    }

    cout << ans << endl;
}