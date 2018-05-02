#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;

int main(){
    string t[4] = {"dream", "dreamer", "erase", "eraser"};
    string s;
    cin >> s;
    int pos = s.length()-1;
    bool flag;
    while(true){
        flag = false;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j <= t[i].length(); j++){
                if(j == t[i].length()){
                    flag = true;
                    pos -= j;
                    break;
                }
                if(s[pos-j] != t[i][t[i].length()-1-j]) break;
            }
            if(flag)    break;
        }
        if(!flag){
            cout << "NO\n";
            return 0;
        }
        if(pos <= 0){
            cout << "YES\n";
            return 0;
        }
    }
}