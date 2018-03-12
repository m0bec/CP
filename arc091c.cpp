#include <bits/stdc++.h>
using namespace std;

long long n, m, ans;

int main(){
    cin >> n >> m;
    if(n-2 < 0 || m - 2 < 0){
        if(n == 1 && m == 1){
            cout << "1\n";
            return 0;
        }
        else if(n < m){
            cout << m - 2 << endl;
            return 0;
        }
        else{
            cout << n - 2 << endl;
            return 0;
        }
    }

    cout << (n-2)*(m-2) << endl;
}