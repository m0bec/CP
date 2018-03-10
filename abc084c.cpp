#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int c[501] = {}, s[501] = {}, f[501] = {};

int main(){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> c[i] >> s[i] >> f[i];
    }
    int ans;
    for(int i = 0; i < n-1; i++){
        ans = 0;
        ans += c[i] + s[i];
        for(int j = i+1; j < n-1; j++){
            if(ans < s[j]){
                ans = s[j] + c[j];
            }
            else{
                if((ans - s[j]) % f[j] == 0){
                    ans += c[j];
                }
                else{
                    ans = (((ans - s[j]) / f[j]) + 1) * f[j] + c[j] + s[j];
                     
                }
            }
        }
        cout << ans << '\n';
    }
    cout << "0\n";
}