#include <bits/stdc++.h>
using namespace std;

int n;
int t[4];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    int r,l, mem, ans = 100000;
    for(int i = 1; i < 8; i++){
        r = l = 0;
        for(int j = 0; j < 4; j++){
            if(i & (1<<j)){
                r += t[j];
            }
            else{
                l += t[j];
            }
        }
        mem = max(r,l);
        ans = min(ans, mem);
    }
    cout << ans <<endl;
}