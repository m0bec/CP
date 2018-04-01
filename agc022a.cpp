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
 
string s;
int me[26];
char da[30];
int co;


int main(){
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        me[(int)(s[i]-'a')]++;
    }
    for(int i = 0; i < 26; i++){
        if(me[i] == 0){
            s += char(i+'a');
            cout << s << endl;
            return 0;
        }
    }

    char mem = s[s.length()-1];
    bool flag = false;
    for(int i = s.length()-1; i > 0; i--){
        if(s[i] > s[i-1]){
            if(flag){
                for(int j = 0; j < i-1; j++){
                    cout << s[j];
                }
                da[co] = s[i];
                co++;
                sort(da, da+co);
                for(int j = 0; j < co; j++){
                   // cout <<  j << ' ' << da[j] << endl;
                    if(s[i-1] < da[j]){
                        cout << da[j] << endl;
                        break;
                    }
                }
                return 0;
            }
            for(int j = 0; j < s.length()-2; j++)   cout << s[j];
            cout << s[s.length()-1] << endl;

            return 0;
        }
        if(s[i] < s[i-1]){
            da[co] = s[i];
            co++;
            flag = true;
        }
    }

    

    cout << "-1\n";
}