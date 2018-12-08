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

int main(){
       cin >> n;
       if(n == 25){
              cout << "Christmas\n"; 
       } 
       else if(n == 23){
              cout << "Christmas Eve Eve\n";
       }
       else if(n == 24){
              cout << "Christmas Eve\n";
       }
       else if(n == 22){
              cout << "Christmas Eve Eve Eve\n";
       }
}