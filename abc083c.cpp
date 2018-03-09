#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long x, y, ans = 0;

    cin >> x >> y;

    while(x <= y){
        if(x <= y)  ++ans;
        x *= 2;
    }
    cout << ans << endl;
}