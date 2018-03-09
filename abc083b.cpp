#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    long long ans = 0;
    int ch = a;
    int st = 0, mo = 0;

    for(int i = 0; i <= n; i++){
        st = 0;
        mo = 100;
        st += i % 10;
        for(int j = 2; j <= to_string(i).length(); j++){
            st += (i % mo) / (mo/10); 
            mo *= 10;
        }
        if(st >= a && st <= b) {
            ans += i;
        }
    }

    cout << ans << endl;
}