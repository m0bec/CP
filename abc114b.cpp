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
 
string s;
int ans = 999;
int main(){
    cin >> s;
    for(int i = 0; i < s.length()-2; i++){
        int n = (int)(s[i]-'0')*100 + (int)(s[i+1]-'0')*10 + (int)(s[i+2]-'0');
        ans = min(ans,abs(n-753));
    }
    cout << ans << endl;
}