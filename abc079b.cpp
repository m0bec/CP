#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long l[87] = {};
    l[1] = 1;
    l[0] = 2;
    long long ans = l[n];
    for(int i = 2; i <= n; i++){
        ans = l[i] = l[i-1] + l[i-2];
    }
    cout << ans << '\n';
}