#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dp[4001][16001] = {};
int dpy[4001][16001] = {};

int main(){
    int x, y;
    string s;
    cin >> s;
    cin >> x >> y;
    vector<int> dx, dy;
    int sw = 0, cou = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'T'){
            if(sw == 1){
                dy.push_back(cou);
                cou = 0;
                sw = 0;
            }
            else{
                dx.push_back(cou);
                cou = 0;
                sw = 1;
            }
        }
        else{
            ++cou;
            if(i == s.length()-1){
                if(sw == 1){
                    dy.push_back(cou);
                    cou = 0;
                    sw = 0;
                }
                else{
                    dx.push_back(cou);
                    cou = 0;
                    sw = 1;
                }
            }
        }
    }

    dp[1][dx[0]+8000] = 1;
    for(int i = 1; i < dx.size(); i++){
        for(int j = 0; j < 16001; j++){
            if(dp[i][j] == 1){
                dp[i+1][j+dx[i]] = 1;
                dp[i+1][j-dx[i]] = 1;
            }
        }
    }

    dpy[0][8000] = 1;
    for(int i = 0; i < dy.size(); i++){
        for(int j = 0; j < 16001; j++){
            if(dpy[i][j] == 1){
                dpy[i+1][j+dy[i]] = 1;
                dpy[i+1][j-dy[i]] = 1;
            }
        }
    }
    if(dpy[dy.size()][y + 8000] ==1 && dp[dx.size()][x + 8000] == 1){
        cout << "Yes\n";
    }
    else    cout << "No\n";
}