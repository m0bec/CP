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

ll n,m;
const ll SIZE = 1e5+10;
ll a[SIZE],b[SIZE],c[SIZE];
pair<ll,ll> cb[SIZE];
ll aa[SIZE];

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> cb[i].second >> cb[i].first;
    }

    //sort(a,a+n,greater<ll>());
    sort(a,a+n);
    sort(cb,cb+m);
/*
    ll n_c = 0;
    for(int i = m-1; i > 0; i--){
        if(n_c < n){
            if(n_c+cb[i].second < n){
                n_c += cb[i].second;
            }
            else{
                cb[i].second = n - n_c;
            }
        }
        else{
            cb[i].second = 0;
        }
    }
*/
    int ind_a = n-1, ind_b = m-1;
    for(int i = 0; i < n; i++){
        aa[i] = max(a[ind_a],cb[ind_b].first);
        if(a[ind_a]>cb[ind_b].first){
            --ind_a;
        }
        else{
            if(cb[ind_b].second > 1)    cb[ind_b].second--;
            else{
                --ind_b;
            }
        }
    }
/*
    int ind = 0;
    for(int i = 0; i < m; i++){
        bool f = false;
        for(int j = 0; j < cb[i].second; j++){
            if(a[ind] < cb[i].first){
                a[ind] = cb[i].first;
                ++ind;
            }
            else{
                if(!f){
                    f = true;
                    ind = 0;
                    if(a[ind] < cb[i].first){
                        a[ind] = cb[i].first;
                        ++ind;
                    }                    
                }
                else{
                    break;
                }
            }
        }
    }
*/
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += aa[i];
    }
    cout << ans << endl;
}