#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int m, n, mpos;
int ans = 0;
int map[1000*1000+1], p[1000];

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            map[i*n + j] = p[i] + p[j];
        }
    }

    sort(p, p+n);
    sort(map, map+n*n);


    for(int i = 0; i < n; i++){
        if(p[i] > m)  break;
        ans = p[i];
    }
    for(int i = 0; i < n*n; i++){
        if(map[i] > m)  break;
        mpos = i;
        if(ans < map[i])    ans = map[i];
    }

    int memo;
    for(int i = 0; i < n; i++){
        memo = *(upper_bound(map, map+n*n, m-p[i])-1);
        ans = max(ans, memo+p[i]);
        for(int j = 0; j < n; j++){
            if(m-p[i]-p[j] > 0){
                memo = *(upper_bound(map, map+n*n, m-p[i]-p[j])-1);
                ans = max(ans, memo + p[i] + p[j]);
            }
        }
    }

    cout << ans << '\n';
}