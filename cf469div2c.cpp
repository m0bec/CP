#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

string s;
vector<int> num[2000001];
int cou = 0, ch = 0;
int main(){
    cin >> s;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            ++cou;
            num[cou].push_back(i+1);
            ch = max(cou, ch);
        }
        else{
            if(cou < 1){
                cout << "-1\n";
                return 0;
            }
            num[cou].push_back(i+1);
            --cou;
        }
    }

    if(ch != cou){
        cout << "-1\n";
        return 0;
    }
    cout << cou << '\n';
    for(int i = 1; i <= cou; i++){
        cout << num[i].size();
        for(int j = 0; j < num[i].size(); j++){
            cout << ' ' << num[i][j];
        }
        cout << '\n';
    }
}