#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

string s;

int main(){
    cin >> s;
    char now = s[0];
    int ans = s.length(), mem, n = s.length();

    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            mem = max(i, n-i);
            ans = min(ans, mem);
        }
    }
    cout << ans << endl;
}