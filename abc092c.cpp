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
 
int n;
long long a[100010];
long long ans;

int main(){
    cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[n+1] = 0;

    for(int i = 1; i <= n+1; i++){
        ans += abs(a[i] - a[i-1]);
    }

    for(int i = 1; i <= n; i++){
        cout << ans - abs(a[i]-a[i-1]) - abs(a[i+1] - a[i]) + abs(a[i+1] - a[i-1]) << endl;
    }
}