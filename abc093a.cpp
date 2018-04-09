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
 
int n, a, b;
string s;
int are[100];
int main(){
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        are[s[i]-'a']++;
    }
    for(int i = 0; i < 3; i++){
        if(are[i] != 1){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}