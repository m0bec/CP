#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long long ans = 0;
    int a[100000] = {}, b[100000] = {}, c[100000] = {};
    stack<int> st;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    sort(c, c+n);
    int bi = n-1;
    bool flag = true;
    int ai = n-1;
    int ar_bi[100000] = {};
    while(flag){
        if(a[ai] < b[bi]){
            ar_bi[bi] = ai+1;
            if(bi > 0) --bi;
            else    break;
        }
        else{
            if(ai > 0) --ai;
            else{
                break;
            }
        }
    }
    int ci = n-1;
    bi = n-1;
    long long ar_sum[100000] = {};
    ar_sum[0] = ar_bi[0];
    for(int i = 1; i < n; i++){
        ar_sum[i] = ar_sum[i-1] + ar_bi[i];
    }
    while(true){
        if(c[ci] > b[bi]){
            ans += 1LL * ar_sum[bi];
            if(ci > 0) --ci;
            else    break;
        }
        else{
            if(bi > 0)  --bi;
            else    break;
        }
    }

    cout << ans << '\n';
}