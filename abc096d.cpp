#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

int so[55556*5];
vector<int> soar, ans;
int n;
int main(){
    cin >> n;
    for(int i = 2; i <= sqrt(55555*5); i++){
        if(so[i] == 0){
            for(int j = i*2; j <= 55555*5; j += i){
                ++so[j];
            }
        }
    }
    for(int i = 2; i < 55555*5; i++){
        if(so[i] == 0){
            soar.push_back(i);
        }
    }

    for(int i = 0; i < 100; i++){
        if(soar[i] != 11 && soar[i] != 17 && soar[i] != 3){
        ans.push_back(soar[i]);
        }
    }
    int cou = 55;
    bool flag = true;
    while(flag){
        flag = false;
    for(int i = 0; i < n-4; i++){
        for(int j = i+1; j < n-3; j++){
            for(int k = j+1; k < n-2; k++){
                for(int l = k+1; l < n-1; l++){
                    for(int m = l+1; m < n; m++){
                        ll num = ans[i] + ans[j] + ans[k] + ans[l] + ans[m];
                        if(so[num] == 0){
                            ans[m] = soar[cou];
                            ++cou;
                            flag = true;
                        }
                    }
                }
            }
        }
    }
    }

    for(int i = 0; i < n; i++){
        printf("%lld ", ans[i]);
    }
    cout << endl;

}