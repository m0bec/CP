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

int n, m;
long long x[100010], y[100010], memx, memy, mo = 1000000000+7;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)  cin >> x[i];
    for(int i = 1; i <= m; i++)  cin >> y[i];
    for(int i = 1; i <= n; i++){
        memx += (i-1)*x[i] - (n-i)*x[i];
    }
    memx %= mo;
    for(int i = 0; i <= m; i++){
        memy += (i-1)*y[i] - (m-i)*y[i];
    }
    memy %= mo;

    cout << (memx * memy) % mo << endl;
}
