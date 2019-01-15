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
 
string s;
bool f = false,f2 = false;
string ans = "keyence";
int pos;
string kou;
int mem,po;
bool ok = true;
int main(){
    cin >> s;
    
    pos = 0;
    if(s[0] == 'k'){
        for(int i = 0; i < s.length(); i++){
            if(ans[pos] == s[i])    ++pos;
            else{
                po = pos;
                for(int j = i; j < s.length(); j++){
                    if(s[j] == ans[pos]){
                        ++pos;
                    }
                    else{
                        pos = po;
                        if(s[j] == ans[pos])    ++pos;
                    }
                    if(pos == ans.length()){
                        if(j == s.length()-1){
                            cout << "YES\n";
                            return 0;
                        }
                        pos = po;
                    }
                }
                break;
            }
            if(pos == ans.length()){
                cout << "YES\n";
                return 0;
            }
        }
    }

    pos = ans.length()-1;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == ans[pos]){
            --pos;
        }
        else{
            break;
        }
        if(pos == -1){
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}