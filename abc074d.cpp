#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int a[301][301] = {}, b[301][301] = {};
    int c=1;
    long long ans = 0;

    cin >> N;
    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < N+1; j++){
            cin >> a[i][j];
            b[i][j]= a[i][j];
        }
    }

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j<N+1; j++){
            for(int k=0; k < N+1; k++){
                if(a[j][k] > a[j][i] + a[i][k]){
                    cout << "-1\n";
                    return 0;
                }
            }
        }
    }

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j<N+1; j++){
            for(int k=1; k < N+1; k++){
                if(k == j || k == i){}
                else if(a[i][j] == a[i][k] + a[k][j]){
                    b[i][j] = b[j][i] = 0;
                }
            }
        }
    }

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < N+1; j++){
            ans += b[i][j];
        }
    }

    cout << ans/2 << '\n';
}