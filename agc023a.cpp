#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

ll a[100010*2], ans;
int n;

int main(){
    cin >> n;
    a[0] = 0;
    for(int i = 1; i < n+1; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    sort(a, a+n+1);

    ll cou = 0;
    for(int i = 1; i < n+1; i++){
        if(a[i-1] == a[i])  ++cou;
        else{
            ans += (cou*(cou+1))/2;
            cou = 0;
        }
    }
    ans += cou*(cou+1)/2;
    cout << ans << endl;
}