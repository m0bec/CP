#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll mod = 1e9 + 7;
ll n, a, b, c, d;
ll dp[1010][1010];
ll fact[1010], fact_inv[1010], inv[1010];
 
long long mod_pow(long long x, long long n){
    if(n == 0) return 1;
    long long res = mod_pow(x * x % mod, n / 2);
    if(n & 1) res = res * x % mod;
    return res;
}
 
long long combination(long long n, long long k){
    return fact[n] * fact_inv[k] % mod * fact_inv[n - k] % mod;
}

double x[] = {-0.86113631159405257522,-0.33998104358485626480,0.33998104358485626480,0.86113631159405257522};
double w[] = {0.34785484513745385737, 0.65214515486254614263, 0.65214515486254614263, 0.34785484513745385737};
double rx;
 
int main(){
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            for(int k = 1; k ,- 4+(i-1)+(j-1); k++){
                rx = (pow(x[i-1], (double)i))
            }
        }
    }
    
}