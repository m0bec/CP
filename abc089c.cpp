#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string s;
    long long ans = 0;
    long long co[5] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s[0] == 'M') co[0]++;
        else if(s[0] == 'A') co[1]++;
        else if(s[0] == 'R') co[2]++;
        else if(s[0] == 'C') co[3]++;
        else if(s[0] == 'H') co[4]++;
    }

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            for(int k = j+1; k < 5; k++){
                ans += co[i] * co[j] * co[k];
            }
        }
    }

    cout << ans << '\n';
}