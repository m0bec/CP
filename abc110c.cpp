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
 
char anst[30], anss[30];

int main(){
    for(int i = 0; i < 30; i++) anss[i] = anst[i] = 'A';
    string s,t;
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++){
        if(anss[int(s[i]-'a')] != 'A'){
            if(anss[int(s[i]-'a')] != t[i]){
                cout << "No\n";
                return 0;
            }
        }
         if(anst[int(t[i]-'a')] != 'A'){
            if(anst[int(t[i]-'a')] != s[i]){
                cout << "No\n";
                return 0;
            }
        }
        anss[int(s[i]-'a')] = t[i];
        anst[int(t[i]-'a')] = s[i];
    }

    cout << "Yes\n";
}