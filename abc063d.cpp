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
 
ll n,a,b;
ll h[100001];

int main(){
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h, h+n);
    ll c = 0;
    ll t = h[n-1]/a;
    for(int i = t; ; i++){
        bool flag = true;
        ll cc = i;
        for(int j = 0; j < n; j++){
            if(h[j]-b*i > 0){
                cc -= (h[j]-b*i)/(a-b);
                if((h[j]-b*i) % (a-b) != 0) --cc;
            }
            if(cc < 0){
                flag = false;
                break;
            }
        }
        if(flag){
            c = i;
            break;
        }
    }
    cout << c << endl;
}