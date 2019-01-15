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

int h,n,w;
int a,b;
int p[101];

int main(){
    cin >> n;
    cin >> a >> b;
    for(int i = 0; i < n; i++){
           cin >> p[i];
    }
    sort(p,p+n);

       int s1,s2;
    for(int i = 0;i < n; i++){
           if(a<p[i]){
                  s1 = i;
                  break;
           }
           if(i == n-1)     s1 = n;
    }
    for(int i = 0; i < n; i++){
           if(b<p[i]){
                  s2 = i;
                  break;
           }
           if(i == n-1)     s2 = n;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
           if(p[i]> a || p[s1] > b || s2 == n){
                  break;
           }
           ++s1;
           ++s2;
           ++ans;
    }
                      cout << ans << endl;
}