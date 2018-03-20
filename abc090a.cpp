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

string a,b,c,ans;

int main(){
    cin >> a >> b >> c;
    ans += a[0];
    ans += b[1];
    ans += c[2];

    cout << ans << endl;
}