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
 

int n, t;

int main(){
    cin >> n >> t;
    int c, tt,ans = t,ansa = 10000;
    for(int i = 0; i < n; i++){
        cin >> c >> tt;
        if(ans >= tt){
            if(ansa >= c){
                ansa = c;
            }
            
        }
    }

    if(ansa == 10000){
        cout << "TLE\n";
    }
    else{
        cout << ansa;
    }
}