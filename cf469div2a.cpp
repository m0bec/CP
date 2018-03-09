#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int l, r, a;

int main(){
    cin >> l >> r >> a;
    int ans;
    if(l > r){
        if(l - r >= a){
            ans = (r + a) * 2;
        }
        else{
            a -= l - r;
            ans = (l + a/2) * 2;
        }
    }
    else{
        if(r - l >= a){
            ans = (l + a) * 2;
        }
        else{
            a -= r - l;
            ans = (r + a/2) * 2;
        }
    }

    cout << ans << endl;
}