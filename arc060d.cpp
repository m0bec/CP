#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;

ll sum;
ll floor(ll b_, ll n_){
    if(n_ < b_) return n_;
    else{
        return floor(b_, n_/b_) + n_ % b_;
    }
}

int main(){
    ll n, mem, sum, s, memb;
    cin >> n >> s;

    if(n == s){
        cout << n+1 << endl;
        return 0;
    }

    for(ll i = 2; i <= sqrt(n)+1; i++){
        if(s == floor(i, n)){
            cout << i << endl;
            return 0;
        }
    }

    if(n-s > 1){
        for(ll i = sqrt(n); i > 0; i--){
            if(s == floor((n-s)/i+1, n)){
                cout << (n-s)/i+1 << endl;
                return 0;
            }
        }
    }
   
    cout << "-1\n";

}