#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num = 1;
    int a[200000], b[200000] = {};

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int j = 0;
    b[j]++;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
          num++;
          j++;
        }
        b[j]++;
    }
    sort(b,b+j+1);
    int ans = 0;
    int mem_ans = 0;
    if(num > k){
        mem_ans = num-k;
        for(int i = 0; i < mem_ans; i++){
            ans += b[i];
        }
    }
    cout << ans << '\n';
}