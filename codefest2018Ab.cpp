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
 
int n,m,a,b;
int l[100],r[100],cou[100];

int main(){
    cin >> n >> m >> a >> b;
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
        for(int j = l[i]-1; j <= r[i]-1; j++)   cou[j]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(cou[i] > 0)  ans += a;
        else    ans += b;
    }

    cout << ans << endl;
}