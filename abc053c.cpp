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
 
long long x;
long long ans;
int main(){
    cin >> x;
    ans = x/11;
    ans*= 2;
    if(x%11 != 0){
        if(x%11 <= 6)   ++ans;
        else ans += 2;
    }
    cout << ans << endl;
}