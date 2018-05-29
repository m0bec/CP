#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

int n, c[3*100000+30], mem, ans, pos;
string s;

int main(){
    cin >> n;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'W') c[i+1]++;
        c[i+1] += c[i];
    }
    ans = 3*100000+30;
    for(int i = 0; i < n; i++){
        mem = c[i] + (n-i-1)-(c[n]-c[i+1]);
        ans = min(ans, mem);
    }
    cout << ans << endl;
}