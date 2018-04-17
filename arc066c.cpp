#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1E9+7;
int n, a[100001], aa;
ll ans;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aa;
        a[aa]++;
    }

    bool flag = true;
    if(n% 2 == 0){
        for(int i = 1; i < n; i+= 2){
            if(a[i] != 2){
                flag  = false;
                break;
            }
        }
    }
    else{
        if(a[0] != 1)   flag = false;
        for(int i = 2; i < n; i+= 2){
            if(a[i] != 2){
                flag = false;
                break;
            }
        }
    }

    ans = 1;
    if(!flag){
        cout << "0\n";
        return 0;
    }
    else{
        for(int i = 0; i < n/2; i++){
            ans = ans * 2 % MOD;
        }
    }

    cout << ans << endl;
}