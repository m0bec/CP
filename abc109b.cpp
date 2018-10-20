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


int n;
string w[110];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }

    for(int i = 1; i < n; i++){
        if(w[i-1][w[i-1].length()-1] != w[i][0]){
            cout << "No\n";
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(w[i] == w[j]){
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
}