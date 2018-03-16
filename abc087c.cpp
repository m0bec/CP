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
int a[2][101];
int sum1[100], sum2[100];
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[0][i];
        sum1[i] = a[0][i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[1][i];
        sum2[i] = a[1][i];
    }
    for(int i = 0; i < n-1; i++){
        sum1[i+1] += sum1[i];
        sum2[i+1] += sum2[i];
    }
    int ans = 0;
    int st;
    for(int i = 0; i < n; i++){
        st = sum1[n-1-i] + sum2[n-1]-sum2[n-1-i] + a[1][n-1-i];
        ans = max(ans, st);
    }
    cout << ans << endl;
}