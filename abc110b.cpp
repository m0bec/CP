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
 
int n,m,xx,yy;
int x[100], y[100];

int main(){
    cin >> n >> m >> xx >> yy;
    for(int i = 0; i < n; i++){ cin >> x[i];}
    for(int i = 0; i < m; i++) { cin >> y[i];}

    sort(x,x+n);
    sort(y,y+m);

    if(x[n-1] >= y[0]){
        cout << "War\n";
        return 0;
    }

    if(x[n-1] >= yy){
        cout << "War\n";
        return 0;
    }
    if(y[0] <= xx){
        cout << "War\n";
        return 0; 
    }

    cout << "No War\n";
}