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
 
int a,b,c,s;

int main(){
    cin >> a >> b >> c >> s;

    int ans = a+b+c;
    if(s-ans <= 3 && s-ans >= 0)    cout << "Yes\n";
    else    cout << "No\n";
}