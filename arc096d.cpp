#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

bool SecondCompare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second<b.second;
}

ll n, c, ans, mem, bef_dis, l, r, mid;
Pl susi[100010], rev_susi[100010], non_susi[100010], non_rev_susi[100010];

int main(){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> susi[i].first >> susi[i].second;
        rev_susi[i] = susi[i];
        rev_susi[i].first = c-rev_susi[i].first;
    }

    sort(susi, susi+n);
    sort(rev_susi, rev_susi+n);
    for(int i = 1; i < n; i++){
        susi[i].second += susi[i-1].second;
        rev_susi[i].second += rev_susi[i-1].second;
    }

    for(int i = 0; i < n; i++){
        susi[i].second -= susi[i].first;
        rev_susi[i].second -= rev_susi[i].first;
        non_rev_susi[i] = rev_susi[i];
        non_susi[i] = susi[i];
    }

    sort(susi, susi+n, SecondCompare);
    sort(rev_susi, rev_susi+n, SecondCompare);

    ans = maxll(susi[n-1].second, maxll(ans, rev_susi[n-1].second));

    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(susi[i].second + rev_susi[j].second - susi[i].first < ans)   break;
            if(c - rev_susi[j].first > susi[i].first){
                ans = maxll(ans, susi[i].second + rev_susi[j].second - susi[i].first);
                break;
            }
        }
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(susi[j].second + rev_susi[i].second - rev_susi[i].first < ans)   break;
            if(c - rev_susi[i].first > susi[j].first){
                ans = maxll(ans, susi[j].second + rev_susi[i].second - rev_susi[i].first);
                break;
            }
        }
    }

    

    printf("%lld\n", ans);
}