#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

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

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

string s;
char a,b;

int main(){
    cin >> s;
    ll cou1 = 0, cou2 = 0;
    a = s[0];
    ++cou1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] != a){
            if(cou2 == 0){
                b = s[i];
                ++cou2;
            }
            else{
                if(s[i] == b)   ++cou2;
                else{
                    cout << "No\n";
                    return 0;
                }
            }
        }
        else    ++cou1;
    }

    if(cou1 == cou2){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}