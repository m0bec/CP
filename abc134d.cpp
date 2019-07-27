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

const int SIZE = 2e5+100;
ll n;
ll a[SIZE];
ll ans1[SIZE], ans2[SIZE];
ll mem[SIZE],add[SIZE];
ll ans_leng;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = n; i > 0; i--){
        ll sum = 0;
        for(int j = n/i; j > 0; j--){
            int num = j*i;
            sum += add[num];
        }
        if(sum %2 != a[i]){
            if(add[i] == 1){
                cout << i << ' ' << sum << endl;
                cout << "-1\n";
                return 0;
            }
            ++add[i];
            ans1[ans_leng] = i;
            ++ans_leng;
        }
    }

    cout << ans_leng << endl;
    if(ans_leng == 0)   return 0;
    for(int i = 0; i < ans_leng; i++){
        cout << ans1[i] << ' ';
    }
    cout << endl;
}