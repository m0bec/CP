#include <bits/stdc++.h>
using namespace std;
 
bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 
long long n,m;

int main(){
    cin >> n >> m;

    long long ans = 0;
    ans = min(n, m/2);
    ans = max(ans + (m-2*n)/4, ans);

    cout << ans << endl;
}