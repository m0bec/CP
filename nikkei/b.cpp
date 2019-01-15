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
string a,b,c;

int main(){
    cin >> n;
    cin >> a >> b >> c;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        char mem1,mem2,mem3;
        mem1 = a[i];
        mem2 = b[i];
        mem3 = c[i];

        if(mem1 == mem2 && mem1 == mem3){
            continue;
        }
        if(mem1 == mem2 || mem1 == mem3 || mem2 == mem3){
            ++ans;
        }
        else{
            ans += 2;
        }
    }

    cout << ans << endl;

}