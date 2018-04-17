#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const ll MOD = 1E9+7;
 
ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
int h, w;
string s[13], ns[13], mem_ns[13];
int sc[14][30], sum[13], counter_word[30];

bool solve(int h_, int w_){
    bool f[13];
    for(int i = 0; i < 13; i++) f[i] = false;

    for(int i = 0; i < w_; i++){
        sort(ns[i].begin(), ns[i].end());
    }
    for(int i = 0; i < w_; i++){
        if(!f[i]){
            for(int j = i+1; j < w_; j++){
                if(ns[i] == ns[j]){
                    f[i] = f[j] = true;
                }
            }
        }
    }
    int counter = 0, mem_false;
    for(int i = 0; i < w_; i++){
        if(!f[i]){
            counter++;
            mem_false = i;
        }
        if(w_ % 2 == 0){
            if(counter >= 1){
                cout << "NO\n";
                return false;
            }
        }
        else{
            if(counter >= 2){
                cout << "NO\n";
                return false;
            }
        }
    }

    int f_word = 0;
    if(w_ % 2 == 1){
        for(int i = 0; i < s[mem_false].size(); i++){
            counter_word[s[mem_false][i]-'a']++;
        }
        for(int i = 0; i < 30; i++){
            if(counter_word[i]%2 != 0)  ++f_word;
        }
        if(h_ % 2 == 0){
            if(f_word > 0){
                cout << "NO\n";
                return false;
            }
        }
        else{
            if(f_word > 1){
                cout << "NO\n";
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            ns[i] += s[j][i];
        }
        mem_ns[i] = ns[i];
    }

    if(!solve(h,w)) return 0;

   for(int i = 0; i < w; i++){
        ns[i].erase(ns[i].begin(), ns[i].end());
    }

    for(int i = 0; i < h; i++){
        ns[i] = s[i];
    }
    if(!solve(w,h)) return 0;

    cout << "Yes\n";
}