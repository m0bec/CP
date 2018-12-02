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
int d[100];
int main(){
    cin >> n;
    int jj;
    for(int j = 2; j <= n; j++){
        jj = j;
        for(int i = 2; i <= j; i++){
            while(jj%i == 0){
                d[i]++;
                jj /= i;
                if(jj == 1) break;
            }
            
        }
    }

    sort(d,d+100,greater<int>());
    int ans = 0;
    int c1,c2,c3,c4,c5,num;
    c1 = c2 = c3 = c4 = num = c5 = 0;
    for(int i = 0; i < 100; i++){
        if(d[i] >= 74) ++c1;
        if(d[i] >= 24) ++c2;
        if(d[i] >= 14) ++c3;
        if(d[i] >= 4) ++c4;
        if(d[i] >= 2) ++c5;
        if(d[i] > 0)    ++num;
    }

    ans += c1;
    ans += c2*(c5-1);
    ans += c3*(c4-1);
    if((c5-c4)*(c4*(c4-1)/2) > 0)   ans += (c5-c4)*(c4*(c4-1)/2);
    if((c4*(c4-1)*(c4-2)/6) > 0) ans += (c4*(c4-1)*(c4-2)/6)*3;


    cout << ans << endl;



}