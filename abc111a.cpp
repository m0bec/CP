#include <bits/stdc++.h>
using namespace std;

string ans, n;

int main(){
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '1') ans += '9';
        else ans += '1';    
    }

    cout << ans << endl;
}