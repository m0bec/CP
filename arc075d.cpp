#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1E9+7;

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

int n;
ll a, b, h[100010], mem[100010];

int main(){
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    sort(h, h+n);

    ll r = h[n-1]/b+1, l = 0, mid, memmid;
    while(l < r){
        memmid = mid = (l+r)/2;

        for(int i = 0; i < n; i++){
            mem[i] = maxll(0, h[i]-mid*b);
        }
        for(int i = 0; i < n; i++){
            if(mem[i] != 0){
                memmid -= mem[i]/(a-b);
                if(mem[i] % (a-b) != 0) --memmid;
            }
        }
        if(memmid >= 0){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }

    cout << r << endl;
}