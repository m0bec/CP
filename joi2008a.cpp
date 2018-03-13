#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin >> n;
    int ans = 0;
    int yen[6] = {500, 100, 50, 10, 5, 1};
    n = 1000-n;
    for(int i = 0; i < 6; i++){
        ans += n/yen[i];
        n -= n/yen[i] * yen[i];
        if(n == 0)  break;
    }
    cout << ans << endl; 
}