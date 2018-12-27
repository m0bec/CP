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
string s;
ll a;

int main(){
       cin >> n;
       int aa=0,bb=0;
       for(int i = 0; i < n; i++){
              cin >> a;
              if(a % 2 == 0)       ++aa;
              else   ++bb;
       }


       if(bb > 0)  cout << "first\n";
       else cout << "second\n";
}