#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;

int n, y;

int main(){
    cin >> n >> y;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n-i; j++){
            if((y - i*10000 - j*5000)/1000 == n - i - j){
                cout << i << ' ' << j << ' ' << n-i-j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1\n";
}