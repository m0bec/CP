#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}


ll n, k, fw, ans;
ll a[5000+10], dp[5005][5005];

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    ll l = -1, r = n;
    ll mid = (l+r)/2;
    bool flag;

    while(r-l>1){
        mid = (r+l)/2;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= k; j++){
                dp[i][j] = 0;
            }
        }

        dp[0][0] = 1;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < k; j++){
                if(dp[i][j] == 1){
                    if(mid != i)  dp[i+1][minll(j+a[i], k)] = 1;
                    dp[i+1][j] = 1;
                }
            }
        }
        
        flag = false;
        if(a[mid] >= k){
            flag = true;
        }
        else{
            for(ll i = k-a[mid]; i < k; i++){
                if(dp[n][i] == 1){
                    flag = true;
                    break;
                }
            }
        }
        if(flag)    r = mid;
        else    l = mid;
    }

    cout << l+1 << endl;
}
    