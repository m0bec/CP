#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1E9+7;
 
ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}
int BIT[200010];
int n;
double k, a[2*100000+10], c[2*100000+10];


void update(int nn, int x) {
	for (int i = nn; i <= n; i += i & -i) {
		BIT[i] += x;
	}
}
int getsum(int nn) {
	int ss = 0;
	for (int i = nn; i > 0; i -= i & -i) {
		ss += BIT[i];
	}
	return ss;
}



 ll ans;
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    for(int i = 1; i <= n; i++){
        a[i] = a[i]-i*k;
        if(a[i] > 0)    ++ans;
    }

    double mem;
    sort(a+1, a+n+1);

    for(int i = 1; i <= n; i++){
        c[i] = lower_bound(a+1, a+n+1, a[i]) - a+1;
    }

    for(int i = 1; i <= n; i++){
        ans += getsum(c[i]);
		update(c[i], 1);
    }
 
    cout << ans << endl;
}