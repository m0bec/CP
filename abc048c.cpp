#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;

int n, a[100001], x, su[100001];
ll ans;
int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i++){
        su[i-1] = a[i] + a[i-1];
    }

    for(int i = 0; i < n-2; i++){
        if(su[i] > x){
            int mem = min(a[i+1], su[i]-x);
            su[i] -= mem;
            su[i+1] -= mem;
            ans += mem;
        }
    }
    if(n == 2){
        if(su[0] > x)   ans += su[0]-x;
    }
    else{
        if(su[0] > x){
            ans += su[0]-x;
        }
        if(su[n-2] > x){
            ans += su[n-2]-x;
        }
    }

    cout << ans << endl;
}