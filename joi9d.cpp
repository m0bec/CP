#include <bits/stdc++.h>
using namespace std;

string mem[10];
int u[10] = {};
vector<long long> are;
int n, k;
void make_word(int nm, string s){
    string ss;

    if(nm < k){
        for(int i = 0; i< n; i++){
            ss = s;
            if(u[i] == 0){
                u[i] = 1;
                make_word(nm+1, ss += mem[i]);
                u[i] = 0;
            }
        }
    }
    else{
        are.push_back(stoll(s));
    }
}

int main(){

    cin >> n >> k;
    string m;
    for(int i = 0; i < n; i++){
        cin >> mem[i];
    }
    for(int i = 0; i < n; i++){
        u[i] = 1;
        make_word(1, mem[i]);
        u[i] = 0;
    }
    int ans = 0;
    sort(are.begin(), are.end());
    ++ans;
    for(int i = 1; i < are.size(); i++){
        if(are[i] != are[i-1])  ++ans;
    }
    cout << ans << endl;
}