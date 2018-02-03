#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int n,k;
vector<int> x,y;
long long  ans;

int main(){
    int xt[51], yt[51];
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> xt[i] >> yt[i];
        x.push_back(xt[i]);
        y.push_back(yt[i]);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    ans = 1LL * (x[n-1] - x[0]) * (y[n-1] - y[0]);
    for(int xi = 0; xi < n; xi++){
        for(int xj = xi + 1; xj < n; xj++){
            for(int yi = 0; yi < n; yi++){
                for(int yj = yi+1; yj < n; yj++){
                    int c=0;
                    for(int i = 0; i < n; i++){
                        if(x[xi] <= xt[i] && x[xj] >= xt[i] && y[yi] <= yt[i] && y[yj] >= yt[i])    c++;
                    }
                    if(k <= c){
                        ans = min(ans,1LL * (x[xj]-x[xi]) * (y[yj]-y[yi]));
                    }
                }
            }
        }
    }

    cout << ans << '\n';
}