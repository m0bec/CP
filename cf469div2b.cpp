#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int x[100001] = {}, y[100001] = {};

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < m; i++){
        cin >> y[i];
    }

    int xmem = x[0], ymem = y[0], ynum = 1, xnum = 1;
    int ans = 0;

    while(xnum <= n && ynum <= m){
        if(xmem < ymem){
            xmem += x[xnum];
            ++xnum;
        }
        else if(ymem < xmem){
            ymem += y[ynum];
            ++ynum;
        }
        else{
            ++ans;
            xmem = x[xnum];
            ymem = y[ynum];
            ++xnum;
            ++ynum;
        }
    }

    cout << ans << endl;
}