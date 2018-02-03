#include <iostream>
using namespace std;
long long x, y;

int main(){
    cin >> x >> y;
    if(x % y == 0){
        cout << "-1\n";
        return 0;
    }
    else{
        for(int i = 2; i <= 100; i++){
            if(x*i % y != 0){
                cout << x*i << '\n';
                return 0;
            }
        }
    }
    return 0;
}