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

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

ll n;
ll a[10010],b[10010],c[10010];
pair<ll,ll> tree1[10010];
pair<ll,ll> tree2[10010];
ll ans[10010];
vector<ll> tree[10010];
ll mem[10010];
pair<ll,ll> tree3;
queue<pair<ll,ll>> st;




int main(){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> a[i] >> b[i];
        tree1[a[i]-1].first++;
        tree1[b[i]-1].first++;
        tree[a[i]-1].push_back(b[i]-1);
        tree[b[i]-1].push_back(a[i]-1);
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
        tree1[i].second = i;
    }

    sort(tree1,tree1+n);
    sort(c,c+n);

    ll top = tree1[n-1].second;

  //  dfs(top, 0);

    tree3.first = 0;
    tree3.second = top;
    st.push(tree3);
    pair<ll,ll> tmp;
    while(st.size() != 0){
        tmp = st.front();
        st.pop();
        for(int i = 0; i < tree[tmp.second].size(); i++){
            tree2[tree[tmp.second][i]].second = tree[tmp.second][i];
            tree2[tree[tmp.second][i]].first = tmp.first-1;
            st.push(tree2[tree[tmp.second][i]]);
        }
    }
    sort(tree2,tree2+n);

    for(int i = 0; i < n; i++){
        ans[tree2[i].second] = c[i];
    }

    ll cou = 0;
    for(int i = 0; i < n-1; i++){
        cou += min(ans[a[i]-1],ans[b[i]-1]);
    }

    cout << cou << endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
}