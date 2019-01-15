#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
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
 

ll n,xx;
const int SIZE = 1e5+10;
ll x[SIZE];
ll mem[SIZE];
vector<ll> sosu;
int main(){
    cin >> n >> xx;
    for(int i = 0; i < n; i++)  cin >> x[i];


    for(int i = 2; i < SIZE-1; i++){
        if(mem[i] == 0){
            sosu.push_back(i);
            for(int j = i; j < SIZE-1; j+=i)   mem[j] = 1;
        }
    }
    
    ll ans = abs(xx-x[0]);
    for(int i = 1; i < n; i++){
        ll big,sma;
        big = max(ans,abs(xx-x[i]));
        sma = min(ans,abs(xx-x[i]));
        ll mod = big%sma;
        while(mod != 0){
            big = sma;
            sma = mod;
            mod = big%sma;
        }
        ans = sma;
    }

    cout << ans << endl;
}