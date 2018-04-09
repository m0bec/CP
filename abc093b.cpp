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
 
ll n, a, b, k;
string s;

int main(){
    cin  >> a >> b >> k;
    for(ll i = a; i < a+k; i++){
        if(i > b)  break;
        cout << i << '\n';
    }
    for(ll i = b-k+1; i <= b; i++){
        if(i >= a+k) cout << i << '\n';
    }
}