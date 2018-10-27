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
 


int main(){
    string ans;
    cin >> ans;

    if(ans.length() == 2){
        cout << ans << endl;
    }
    else{
        for(int i = 2; i >= 0; i--){
            cout << ans[i];
        }
        cout << endl;
    }
}