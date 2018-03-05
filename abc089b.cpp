#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    char s[100];
    char p = 'P', w = 'W', g = 'G', y = 'Y';
    int c[4] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == p){
            c[0] = 1;
        }
        else if(s[i] == w){
            c[1] = 1;
        }
        else if(s[i] == g){
            c[2] = 1;
        }
        else if(s[i] == y){
            c[3] = 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < 4; i++){
        ans += c[i];
    }
    if(ans == 3){
        cout << "Three" << '\n';
    }else if(ans == 4){
        cout << "Four\n";
    }

}