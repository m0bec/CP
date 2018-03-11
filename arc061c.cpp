#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string s;
string mem;
int main(){
    cin >> s;
    int bit = 0;
    long long ans = 0;
    for(int i = 0; i < (int)pow(2,s.length()-1); i++){
        mem = s[0];
        for(int j = s.length()-2; j >= 0; j--){
            if(i & (1<<j)){
                ans += stoll(mem);
                mem = "";
            }
            mem += s[s.length()-j-1] * 1LL;
        }
        ans += stoll(mem) * 1LL;
    }
    cout << ans << endl;
}