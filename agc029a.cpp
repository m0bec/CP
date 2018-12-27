#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
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
 
int n;
string s;

int main(){
    cin >> s;
    ll ans = 0;
    int f1 = 0,f2 = 0;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == 'B')f1 = 1;
        else    f2 = 1;
    }

    int en = s.length()-1;
    if(f1 != 1 && f2 != 1){
        cout << 0 << endl;
        return 0;
    }
    bool flag = false;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == 'B'){
            ans += en-i;
            --en;
        }
    }

    cout << ans << endl;
}