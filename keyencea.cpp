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
 
int n[5];
 
int main(){
    for(int i = 0; i < 4; i++)  cin >> n[i];

    bool flag[4];
    for(int i = 0; i < 4; i++)  flag[i] = false;
    for(int i = 0; i < 4; i++){
        if(n[i] == 1)   flag[0] = true;
        if(n[i] == 7 )  flag[1] = true;
        if(n[i] == 9)   flag[2] = true;
        if(n[i] == 4) flag[3] = true;
    }

    for(int i = 0; i < 4; i++){
        if(!flag[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}