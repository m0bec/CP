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

const int SIZE = 1e5+100;
ll n,k;
const ll ama = 1000000007;
ll a[SIZE],b[SIZE];
ll num[SIZE];
vector<vector<ll>> vec(SIZE),vec2(SIZE);

int main(){
    cin >> n >> k;
    for(int i = 0; i < n-1; i++){
        cin >> a[i] >> b[i];
        vec[a[i]].push_back(b[i]);
        vec[b[i]].push_back(a[i]);
    }

    stack<ll> st;
     vector<ll> are;

    ll ans = k;
    for(int i = 0; i < vec[1].size(); i++){
        are.push_back(vec[1][i]);
        st.push(vec[1][i]);
    }

    num[1] = num[0] = 1;
    while(!st.empty()){
        ll mem = st.top();
        st.pop();
        num[mem] = 1;
        if(vec[mem].size() != 0){
            for(int i = 0; i < vec[mem].size(); i++){
                if(num[vec[mem][i]] == 0){
                    num[vec[mem][i]] = 1;
                    vec2[mem].push_back(vec[mem][i]);
                    st.push(vec[mem][i]);
                }
            }
        }
    }
    for(int i = 0; i < vec[1].size(); i++){
        are.push_back(vec[1][i]);
        st.push(vec[1][i]);
        ans *= k-1-i;
        ans %= ama;
    }

    while(st.size() != 0){
        ll mem = st.top();
        st.pop();
        if(vec2[mem].size() != 0){
            for(int i = 0; i < vec2[mem].size(); i++){
                ans *= k-2-i;
                ans %= ama;
                st.push(vec2[mem][i]);
            }
        }
    }

    cout << ans << endl;
}