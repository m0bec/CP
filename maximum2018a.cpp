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
 
int n, c;
int t[10001], d[10001], m[10001];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t[i] >> d[i] >> m[i];
        t[i] += 10;
        if(t[i] <= d[i])    c += m[i];
    }

    cout << c << endl;
}