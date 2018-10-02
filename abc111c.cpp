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
 

P a1[100001], a2[100001];
int v[100001], n;
int ans;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i%2==0){
            a2[v[i]].first++;
            a2[v[i]].second = v[i];
        }
        else{
            a1[v[i]].first++;
            a1[v[i]].second = v[i];
        }

    }

    sort(a1, a1+100001);
    sort(a2, a2+100001);

    if(a1[100001-1].second == a2[100001-1].second){
        if(a1[100001-1].second > a2[100001-1].second){
            ans = n-a1[100001-1].first-a2[100001-2].first;
        }
        else if(a1[100001-1].second < a2[100001-1].second){
            ans = n-a1[100001-2].first - a2[100001-1].first;
        }
        else{
            ans = n-a1[100001-1].first - max(a1[100001-2].first,a2[100001-2].first);
        }
    }else{
        ans = n-a1[100001-1].first-a2[100001-1].first;
    }
  //  cout << a2[100001-1].first << ' ' << a2[100001-1].second << endl;
    cout << ans << endl;

}