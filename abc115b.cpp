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
 
int n;
int p[11];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p,p+n);
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        ans += p[i];
    }
    ans += p[n-1]/2;
    cout << ans << endl;
}