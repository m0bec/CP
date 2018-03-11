#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;

int n;
int x[100], y[100];
int ans = 0;
pair<int, int> maxpos;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(ans < abs(x[i]-x[j]) + abs(y[i]-y[j])){
                ans = abs(x[i]-x[j]) + abs(y[i]-y[j]);
                maxpos.first = i;
                maxpos.second = j;
            }
        }
    }
    double xx = x[maxpos.first]-x[maxpos.second];
    double yy = y[maxpos.first]-y[maxpos.second];

    cout << sqrt(xx*xx + yy*yy) << endl;  
}