#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int a[100000] = {};

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a,a+n);

    int ans = 0, cou = 1;
    int ch = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] == ch){
            cou++;
        }
        else{
            if(ch > cou){
                ans += cou;
            }
            else{
                ans += cou - ch;
            }
            ch = a[i];
            cou = 1;
        }
    }
    if(ch > cou){
        ans += cou;
    }
    else{
        ans += cou - ch;
    }

    cout << ans << endl;
}