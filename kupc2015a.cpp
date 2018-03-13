#include <bits/stdc++.h>
using namespace std;

string s;
string to = "tokyo", ky = "kyoto";


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    cin >> s;
    s += "0000000";
    int ans = 0;
    bool flag = true;
    for(int i = 0; i < s.length()-5; i++){
        if(s[i] == 't'){
            flag = true;
            for(int j = 0; j <to.length(); j++){
                if(s[i+j] != to[j]) flag = false;
            }
            if(flag){
                ++ans;
                for(int j = 0; j <to.length(); j++) s[i+j] = '0';
            }
        }
        else if(s[i] == 'k'){
            flag = true;
            for(int j = 0; j <to.length(); j++){
                if(s[i+j] != ky[j]) flag = false;
            }
            if(flag){
                ++ans;
                for(int j = 0; j <to.length(); j++) s[i+j] = '0';
            }
        }
    }
    cout << ans << endl;
    }
}