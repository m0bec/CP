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
 
long long n, comp;
string s;
int ar[16];
int ans, le;
bool flag = true;
int main(){
    cin >> s;
    n = stoll(s);
    le = s.length();
    for(int i = 0; n >= 10; n /= 10)  if(n%10 != 9) flag = false;
    ans = (le-1)*9;
    if(flag)    ans += (int)s[0] - '0';
    else    ans += (int)(s[0]-'0')-1;
    cout << ans << endl;
}