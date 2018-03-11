#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int ans, mem;
string s;

int main(){
    cin >> s;
    for(int i = 0; i < (int)pow(2, s.length()-1); i++){
        mem = (int)(s[0]-'1')+1;
        for(int j = s.length()-2; j >= 0; j--){
            if(i & (1<<j)){
                mem += (int)(s[s.length()-j-1] - '1')+1;
            }
            else{
                mem -= (int)(s[s.length()-j-1] - '1')+1;
            }
        }
        if(mem == 7){
            cout << s[0];
            for(int j = s.length()-2; j >= 0; j--){
                if(i & (1<<j)){
                    cout << '+';
                }
                else{
                    cout << '-';
                }
                cout << s[s.length()-1-j];
            }
            cout << "=7\n";
            return 0;
        }
    }
}