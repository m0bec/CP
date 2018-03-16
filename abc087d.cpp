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
int INF = 2000000000;
int n, m;
int l[200001],r[200001],d[200001];
int go[100001], sum[100001];
int ans = INF;
bool flag;

int Find(int x){
    if(go[x] == x)    return x;
    int tmp = Find(go[x]);
    sum[x] += sum[go[x]];
    go[x] = tmp;
    return go[x];
}

int main(){
    int rr, ll;
    cin >> n >> m;
    for(int i = 0; i <= n; i++){
        go[i] = i;
        sum[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }

    for(int i = 1; i <= m; i++){
        rr = Find(r[i]);
        ll = Find(l[i]);
        if(rr == ll){
            if(abs(sum[l[i]]-sum[r[i]]) != d[i]){
                cout << "No\n";
                return 0;
            }
        }
        else{
            go[ll] = rr;
            sum[ll] = d[i] - sum[l[i]] + sum[r[i]];
        }
    }
    cout <<"Yes\n";
}