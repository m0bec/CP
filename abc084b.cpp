#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int a, b;
string s;

int main(){
    cin >> a >> b;
    cin >> s;
    int ac = 0, bc = 0, ch = 0;
    for(int i = 0; i < s.length(); i++){   
        if(i != a){
            if(s[i] == '-'){
                cout << "No\n";
                return 0;
            }
            if(ch == 0){
                ++ac;
            }
            else{
                ++bc;
            }
        }
        else{
            if(s[i] != '-'){
                cout << "No\n";
                return 0;
            }
            ch = 1;
        }
    }

    if(ac != a || bc != b){
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
}