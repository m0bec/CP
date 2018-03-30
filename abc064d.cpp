#include <bits/stdc++.h>
using namespace std;
 
bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 
int n, r, l, rc, lc, c;
string s, ans;
int main(){
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] != s[i-1]){
            if(s[i] == '('){
                if(c < 0){
                    r += c;
                    c = 0;
                }
            }
        }
        if(s[i] == '(') ++c;
        else    --c;
    }

    for(int i = r; i < 0; i++)  cout << '(';
    for(int i = c; i < 0; i++)  cout << '(';
    for(int i = 0; i < n; i++)  cout << s[i];
    for(int i = c; i > 0; i--)  cout << ')';
    cout << endl;
}