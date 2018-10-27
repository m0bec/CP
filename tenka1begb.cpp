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
 

ll a,b,k;

int main(){
    cin >> a >> b >> k;

    for(int i = 0; i < k; i++){
        if(i % 2 == 0){
        if(a%2 == 1){
            --a;
        }
            b += a/2;
            a = a/2;

        }else{
        if(b%2 == 1){
            --b;
        }
            a += b/2;
            b = b/2;

        }
    }
    cout << a << ' ' << b << endl;
    
}