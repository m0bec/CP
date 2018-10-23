#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll , ll> P;
typedef pair<ll, ll> PL;
const ll INT_INF = 2147483646;
const ll ll_INF = 9223372036854775807;
ll mod = 1e9+7;

bool SecondCompare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.second>b.second;
}


int gcd(int m, int n){
	if(n == 0){
		return m;
	}
	else{
		gcd(n,m%n);
	}
}
int n,x;
int xx[100010];

int main(){
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> xx[i];
        xx[i] = max(xx[i]-x,x-xx[i]);
    }

    int mo;
    mo = gcd(xx[0],xx[1]);
    for(int i = 0; i < n; i++){
        if(xx[i]%mo != 0){
            mo = gcd(mo,xx[i]);
        }
    }

    cout << mo << endl;
}